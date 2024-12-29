
project('PPMalloc', 'cpp', version : 'local_1.26.11')

# PPMalloc.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/include',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/coreallocator/local_1.04.05/include',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/include',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/include'
)

sources = [ 
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/extras/EAAllocInfo.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/extras/EASmallBlockAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/extras/EASmallBlockAllocatorPool.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/CallStackCmn.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/DefaultCoreAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAAllocationRecorder.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAFixedAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAGeneralAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAGeneralAllocatorDebug.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAHandleAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EANonLocalAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAScratchpadAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EASmallObjectAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/EAStackAllocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/MutexCmn.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/setallocator.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/shared.cpp',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/source/cmn/version.cpp'


]

cxxflags = [
  '-DEASTL_CORE_ALLOCATOR_ENABLED=1',
  '-DEASTL_EASTDC_VSNPRINTF=1',
  '-DPPM_HIGH_SUPPORTED=1',
  '-std=c++17'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
else
  cxxflags += '-DNDEBUG' 
endif

dependencies = [
  dependency('EACallstack', fallback : ['EACallstack', 'EACallstack_dep']),
  dependency('EAThread', fallback : ['EAThread', 'EAThread_dep'])
]

target = shared_library(
  libn,
  sources,
  cpp_args : cxxflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

