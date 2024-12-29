
project('SQLiteEAWebKit', 'c', version : 'local')

# SQLiteEAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/SQLiteEAWebKit/local/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/SQLiteEAWebKit/local/include'
)

sources = [
   '../../../../EAWebKitSupportPackages/SQLiteEAWebKit/local/source/sqlite3.c',
]

cflags = [
  '-DSQLITE_ENABLE_MEMORY_MANAGEMENT',
  '-DSQLITE_OS_MYWIN',
  '-DSQLITE_OS_OTHER'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cflags += '-D_DEBUG'
  cflags += '-DEA_DEBUG'
else
  cflags += '-DNDEBUG' 
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
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

