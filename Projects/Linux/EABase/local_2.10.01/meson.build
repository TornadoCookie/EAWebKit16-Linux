
project('EABase', 'c', version : 'local_2.10.01')

# EABase.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common'
)

sources = [
   
]

cflags = [
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
  c_args : cflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers
)

set_variable(meson.project_name() + '_dep', project_dep)

