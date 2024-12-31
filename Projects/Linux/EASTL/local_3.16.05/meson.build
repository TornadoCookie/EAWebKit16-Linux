
project('EASTL', 'cpp', version : 'local_3.16.05')

# EASTL.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/include',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/include',
    '../../../../EAWebKitSupportPackages/coreallocator/local_1.04.05/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/include'
)

sources = [  
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/allocator_eastl.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/assert.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/fixed_pool.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/hashtable.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/intrusive_list.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/numeric_limits.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/red_black_tree.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/string.cpp',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/source/thread_support.cpp',
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
  dependency('coreallocator', fallback : ['coreallocator', 'coreallocator_dep']),
  dependency('EABase', fallback : ['EABase', 'EABase_dep'])
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

