///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
///////////////////////////////////////////////////////////////////////////////


#include <EABase/eabase.h>
#include <eathread/eathread_semaphore.h>


#if defined(EA_PLATFORM_UNIX) || EA_POSIX_THREADS_AVAILABLE
	#include <time.h>
	#include <errno.h>
	#include <string.h>
	#include <stdio.h>
	#include <limits.h>
	#ifdef EA_PLATFORM_WINDOWS
		EA_DISABLE_ALL_VC_WARNINGS()
		#include <pthread.h>
		#include <Windows.h> // Presumably we are using pthreads-win32.
		EA_RESTORE_ALL_VC_WARNINGS()
		#ifdef CreateSemaphore
			#undef CreateSemaphore // Windows #defines CreateSemaphore to CreateSemaphoreA or CreateSemaphoreW.
		#endif
	#endif


	EASemaphoreData::EASemaphoreData()
		: mnCount(0), mnMaxCount(INT_MAX)
	{
		memset(&mSemaphore, 0, sizeof(mSemaphore)); 
	}


	EA::Thread::SemaphoreParameters::SemaphoreParameters(int initialCount, bool bIntraProcess, const char* /*pName*/)
		: mInitialCount(initialCount), mMaxCount(INT_MAX), mbIntraProcess(bIntraProcess)
	{
	}


	EA::Thread::Semaphore::Semaphore(const SemaphoreParameters* pSemaphoreParameters, bool bDefaultParameters)
	{
		if(!pSemaphoreParameters && bDefaultParameters)
		{
			SemaphoreParameters parameters;
			Init(&parameters);
		}
		else
			Init(pSemaphoreParameters);
	}


	EA::Thread::Semaphore::Semaphore(int initialCount)
	{
		SemaphoreParameters parameters(initialCount);
		Init(&parameters);
	}


	EA::Thread::Semaphore::~Semaphore()
	{
		#if defined(EA_PLATFORM_ANDROID)
			sem_destroy(&mSemaphoreData.mSemaphore);   // Android's sem_destroy is broken. http://code.google.com/p/android/issues/detail?id=3106
		#else
			int result = -1;

			for(;;)
			{
				result = sem_destroy(&mSemaphoreData.mSemaphore);

				if((result == -1) && (errno == EBUSY)) // If another thread or process is blocked on this semaphore...
					ThreadSleep(kTimeoutYield);        // Yield. If we don't yield, it's possible we could block other other threads or processes from running, on some systems.
				else
					break;
			}

			EAT_ASSERT(result != -1);
		#endif
	}


	bool EA::Thread::Semaphore::Init(const SemaphoreParameters* pSemaphoreParameters)
	{
		if(pSemaphoreParameters)
		{
			mSemaphoreData.mnCount    = pSemaphoreParameters->mInitialCount;
			mSemaphoreData.mnMaxCount = pSemaphoreParameters->mMaxCount;

			if(mSemaphoreData.mnCount < 0)
				mSemaphoreData.mnCount = 0;

			mSemaphoreData.mbIntraProcess = pSemaphoreParameters->mbIntraProcess;

			int result = sem_init(&mSemaphoreData.mSemaphore, mSemaphoreData.mbIntraProcess ? 1 : 0, (unsigned)mSemaphoreData.mnCount);

			// To consider: Remove this fallback and simply return false if the first attempt failed.
			if((result == -1) && mSemaphoreData.mbIntraProcess)
			{
				result = sem_init(&mSemaphoreData.mSemaphore, 0, (unsigned)mSemaphoreData.mnCount);

				if(result == -1)
				{
					EAT_ASSERT(false);
					memset(&mSemaphoreData.mSemaphore, 0, sizeof(mSemaphoreData.mSemaphore));
				}
				else
					mSemaphoreData.mbIntraProcess = false;
			}

			return (result != -1);
		}

		return false;
	}


	int EA::Thread::Semaphore::Wait(const ThreadTime& timeoutAbsolute)
	{
		int result;

		if(timeoutAbsolute == kTimeoutNone)
		{
			// We retry waits that were interrupted by signals. Should we instead require
			// the user to deal with this and return an error value? Or should we require
			// the user to disable the appropriate signal interruptions?
			while(((result = sem_wait(&mSemaphoreData.mSemaphore)) == -1) && (errno == EINTR))
				continue;

			if(result == -1)
			{
				EAT_ASSERT(false); // This is an error condition.
				return kResultError;
			}
		}
		else if(timeoutAbsolute == kTimeoutImmediate)
		{
			// The sem_trywait() and sem_wait() functions shall return zero if the calling process successfully 
			// performed the semaphore lock operation on the semaphore designated by sem. If the call was 
			// unsuccessful, the state of the semaphore shall be unchanged, and the function shall return a 
			// value of -1 and set errno to indicate the error.
			int trywaitResult = sem_trywait(&mSemaphoreData.mSemaphore);

			if(trywaitResult == -1)
			{
				if(errno == EAGAIN) // The sem_* family of functions are different from pthreads because they set errno instead of returning an error value.
					return kResultTimeout;

				#ifdef EA_PLATFORM_WINDOWS           // On Windows, the errno mechanism doesn't work unless you 
					if(mSemaphoreData.mnCount == 0)  // are using the C runtime library as a shared dll between 
						return kResultTimeout;       // the app and pthreads.dll. We try to account for the existence 
				#endif                               // of this problem here in a somewhat conservative way.

				return kResultError;
			}

			// Android sem_trywait is broken and in earlier versions returns EAGAIN instead of setting 
			// errno to EAGAIN. http://source-android.frandroid.com/bionic/libc/docs/CHANGES.TXT
			#if defined(EA_PLATFORM_ANDROID) 
				if(trywaitResult == EAGAIN)
					return kResultTimeout;
			#endif
		}
		else
		{
			// Some systems don't have a sem_timedwait. In these cases we 
			// fall back to a polling mechanism. However, polling really
			// isn't proper because the polling thread might be at a greater 
			// priority level than the lock-owning thread and thus this code
			// might not work as well as desired.

			#if defined(EA_PLATFORM_LINUX) || defined(EA_PLATFORM_WINDOWS)
				// We retry waits that were interrupted by signals. Should we instead require
				// the user to deal with this and return an error value? Or should we require
				// the user to disable the appropriate signal interruptions?
				while(((result = sem_timedwait(&mSemaphoreData.mSemaphore, &timeoutAbsolute)) == -1) && (errno == EINTR))
					continue;

				if(result == -1)
				{
					if(errno == ETIMEDOUT) // The sem_* family of functions are different from pthreads because they set errno instead of returning an error value.
						return kResultTimeout;

					#ifdef EA_PLATFORM_WINDOWS           // On Windows, the errno mechanism doesn't work unless you 
						if(mSemaphoreData.mnCount == 0)  // are using the C runtime library as a shared dll between 
							return kResultTimeout;       // the app and pthreads.dll. We try to account for the existence 
					#endif                               // of this problem here in a somewhat conservative way.

					return kResultError;
				}
			#else 
				// BSD family of Unixes usually lack sem_trywait as of this writing. 
				// This is a major problem, as a polling solution doesn't work under some circumstances.

				while(((result = sem_trywait(&mSemaphoreData.mSemaphore)) == -1) && (errno == EAGAIN || errno == EINTR) && (GetThreadTime() < timeoutAbsolute))
					ThreadSleep(1);

				if(result == -1)
				{
					if(errno == EAGAIN)
						return kResultTimeout;

					return kResultError;
				}
			#endif
		}

		EAT_ASSERT(mSemaphoreData.mnCount > 0);
		return (int)mSemaphoreData.mnCount.Decrement(); // AtomicInt32 operation. Note that the value of the semaphore count could change from the returned value by the time the caller reads it. This is fine but the user should understand this.
	}


	int EA::Thread::Semaphore::Post(int count)
	{
		// Some systems have a sem_post_multiple which we could take advantage 
		// of here to atomically post multiple times.
		EAT_ASSERT(mSemaphoreData.mnCount >= 0);

		// It's hard to correctly implement mnMaxCount here, given that it 
		// may be modified by multiple threads during this execution. So if you want
		// to use max-count with an IntraProcess semaphore safely then you need to 
		// post only from a single thread, or at least a single thread at a time.
		
		int currentCount = mSemaphoreData.mnCount;

		// If count would cause an overflow exit early
		if ((mSemaphoreData.mnMaxCount - count) < currentCount)
			return kResultError;

				currentCount += count;

		while(count-- > 0)
		{
			++mSemaphoreData.mnCount;     // AtomicInt32 operation.

			if(sem_post(&mSemaphoreData.mSemaphore) == -1)
			{
				--mSemaphoreData.mnCount; // AtomicInt32 operation.
				EAT_ASSERT(false);
				return kResultError;        
			}
		}

		// If all count posts occurred...
		return currentCount; // It's possible that another thread may have modified this value since we changed it, but that's not important.
	}


	int EA::Thread::Semaphore::GetCount() const
	{
		return (int)mSemaphoreData.mnCount;
	}


#endif // EA_PLATFORM_XXX








