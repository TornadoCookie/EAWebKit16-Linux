
project('coreallocator', 'c', version : 'local-1.12.14')

# coreallocator.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/include'
)

sources = [
   
]

cxxflags = [
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
else
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
  include_directories: headers
)

set_variable(meson.project_name() + '_dep', project_dep)

