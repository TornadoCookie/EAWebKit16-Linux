
project('EAIO', 'cpp', version : 'local_3.01.13')

# EAIO.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/include',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/include',
    '../../../../EAWebKitSupportPackages/coreallocator/local_1.04.05/include',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/include'
)

sources = [ 
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/Allocator.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAAsyncExecutor.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAAsyncStream.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAFileDirectory.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAFileNotification.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAFileStream.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAFileUtil.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAIniFile.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStream.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamAdapter.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamBuffer.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamChild.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamCpp.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamFixedMemory.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamMemory.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/EAStreamNull.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/FnEncode.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/FnMatch.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/PathString.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/compat/EAFilePath.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/internal/EAAsyncExecutorImpl.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/internal/EAIOCoreAllocator.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/internal/EAIOUtil.cpp',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/source/internal/EAIOZoneObject.cpp',

]

cxxflags = [
  '-DEAIO_FILEPATH_ENABLED=1',
  '-DEASTL_CORE_ALLOCATOR_ENABLED=1',
  '-DEASTL_EASTDC_VSNPRINTF=1',
  '-DUTF_USE_EAASSERT=1',
  '-std=c++17'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
  cxxflags += '-DEA_SCEDBG_ENABLED=1'
else
  cxxflags += '-DNDEBUG' 
  cxxflags += '-DEA_SCEDBG_ENABLED=0'
endif

dependencies = [
]

target = static_library(
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

