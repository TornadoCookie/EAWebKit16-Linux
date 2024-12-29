
project('EAStdC', 'cpp', version : 'local_1.26.08')

# EAStdC.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/include',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/include'
)

sources = [  
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EACallback.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EACType.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EADateTime.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAFixedPoint.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAGlobal.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAHashCRC.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAHashString.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAMemory.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAProcess.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EARandom.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAScanf.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAScanfCore.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EASprintf.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EASprintfCore.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EASprintfOrdered.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAStdC.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAStopwatch.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EAString.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/EATextUtil.cpp',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/source/Int128_t.cpp'
]

cxxflags = [
  '-D_GLIBCPP_USE_C99=1',
  '-D_GLIBCXX_USE_C99_MATH=1',
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

