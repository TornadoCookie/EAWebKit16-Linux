///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
///////////////////////////////////////////////////////////////////////////////

#if defined(EA_PRAGMA_ONCE_SUPPORTED)
	#pragma once // Some compilers (e.g. VC++) benefit significantly from using this. We've measured 3-4% build speed improvements in apps as a result.
#endif

/////////////////////////////////////////////////////////////////////////////
// Functionality related to memory and code generation synchronization.
/////////////////////////////////////////////////////////////////////////////


#ifndef EATHREAD_APPLE_EATHREAD_SYNC_APPLE_H
#define EATHREAD_APPLE_EATHREAD_SYNC_APPLE_H


#include <EABase/eabase.h>


#define EA_THREAD_SYNC_IMPLEMENTED


// EAProcessorPause
// Intel has defined a 'pause' instruction for x86 processors starting with the P4, though this simply
// maps to the otherwise undocumented 'rep nop' instruction. This pause instruction is important for
// high performance spinning, as otherwise a high performance penalty incurs.

#if defined(EA_PROCESSOR_X86) || defined(EA_PROCESSOR_X86_64)
	#define EAProcessorPause() __asm__ __volatile__ ("rep ; nop")
#else
	#define EAProcessorPause()
#endif



// EAReadBarrier / EAWriteBarrier / EAReadWriteBarrier

#if defined(EA_THREAD_USE_LEGACY_APPLE_BARRIERS) && EA_THREAD_USE_LEGACY_APPLE_BARRIERS 
	#include <libkern/OSAtomic.h>

	#define EAReadBarrier      OSMemoryBarrier
	#define EAWriteBarrier     OSMemoryBarrier
	#define EAReadWriteBarrier OSMemoryBarrier
#else
	#include <atomic>

	#define EAReadBarrier()      std::atomic_thread_fence(std::memory_order_acquire)
	#define EAWriteBarrier()     std::atomic_thread_fence(std::memory_order_release)
	#define EAReadWriteBarrier() std::atomic_thread_fence(std::memory_order_seq_cst)
#endif


// EACompilerMemoryBarrier

#define EACompilerMemoryBarrier() __asm__ __volatile__ ("":::"memory")




#endif // EATHREAD_APPLE_EATHREAD_SYNC_APPLE_H








