
project('WTF', 'cpp', version : 'local')

# WTF.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/WTF/local',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/icu',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/threads',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/unicode',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common'
)

headers = [
    '../../../../EAWebKitSupportPackages/WTF/local',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf',
]

sources = [
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/Assertions.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/BitVector.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/CompilationThread.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/CryptographicallyRandomNumber.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/CryptographicUtilities.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/CurrentTime.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/DataLog.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/DateMath.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/DecimalNumber.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/FastBitVector.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/FilePrintStream.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/FunctionDispatcher.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/GregorianDateTime.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/HashTable.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/Lock.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/MainThread.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/MD5.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/MediaTime.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/MetaAllocator.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/NumberOfCores.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/OSRandomSource.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/PageBlock.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ParallelJobsGeneric.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ParkingLot.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/PrintStream.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/RAMSize.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/RandomNumber.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/RefCountedLeakCounter.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/RefCounter.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/RunLoop.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/SHA1.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/SixCharacterHash.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/SizeLimits.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/StackBounds.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/StringPrintStream.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/Threading.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ThreadingPthreads.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/WordLock.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/WorkQueue.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/WTFThreadData.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/bignum.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/bignum-dtoa.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/cached-powers.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/diy-fp.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/double-conversion.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/fast-dtoa.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/fixed-dtoa.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/dtoa/strtod.cc',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/MainThreadEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/OSAllocatorEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/RunLoopEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/ThreadingEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/ThreadSpecificEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/ea/WorkQueueEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/AtomicString.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/AtomicStringImpl.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/AtomicStringTable.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/Base64.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/CString.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/StringBuilder.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/StringImpl.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/StringStatics.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/StringView.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/SymbolRegistry.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/text/WTFString.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/threads/BinarySemaphore.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/unicode/UTF8.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/unicode/ea/CollatorEA.cpp',
    '../../../../EAWebKitSupportPackages/WTF/local/wtf/unicode/ea/UnicodeEA.cpp',

]

cxxflags = [
  '-D_UNICODE',
  '-DBUILDING_EA__=1',
  '-DBUILDING_WTF',
  '-DJS_NO_EXPORT',
  '-DNOMINMAX',
  '-DUNICODE',
  '-DWTF_USE_DIRTYSDK=0',
  '-DWTF_USE_EATEXT=0',
  '-DASSERT_DISABLED=1',
  '-DASSERT_MSG_DISABLED=1',
  '-DASSERT_ARG_DISABLED=1',
  '-DFATAL_DISABLED=1',
  '-DERROR_DISABLED=1',
  '-std=c++17',
  '-Og',
  '-Wno-class-memaccess',
  '-Wno-changes-meaning'
]


libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
else
  cxxflags += '-DNDEBUG' 
endif

dependencies = [
  dependency('EABase', fallback : ['EABase', 'EABase_dep']),
]

target = static_library(
  libn,
  sources,
  cpp_args : cxxflags,
  include_directories: includes
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

