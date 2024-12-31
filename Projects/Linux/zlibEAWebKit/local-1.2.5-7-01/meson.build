
project('zlibEAWebKit', 'c', version : 'local-1.2.5-7-01')

# zlibEAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install' 
)

sources = [
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/adler32.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/compress.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/crc32.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/deflate.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/infback.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/inffast.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/inflate.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/inftrees.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/trees.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/uncompr.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install/zutil.c',
    
]

cxxflags = [
    '-DMY_ZCALLOC',
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

