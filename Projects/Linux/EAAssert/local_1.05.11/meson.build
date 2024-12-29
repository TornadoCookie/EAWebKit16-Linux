
project('EAAssert', 'cpp', version : 'local_1.05.11')

# EAAssert.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include',
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/source',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include'
)

sources = [ 
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/source/eaassert.cpp'
    
]

cxxflags = [
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

