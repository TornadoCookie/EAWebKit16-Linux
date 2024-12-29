
project('libpngEAWebKit', 'c', version : 'local-1.01.00-01')

# libpngEAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/include/libpng',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/include/libpng',
)

sources = [
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/png.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngerror.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngget.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngmem.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngpread.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngread.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngrio.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngrtran.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngrutil.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngset.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngtrans.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngwio.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngwrite.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngwtran.c',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/source/pngwutil.c'
    
]

cxxflags = [
    '-DEA_USE_XCEEDZIP=0',
    '-DPNG_IMPEXP=',
    '-DPNG_NO_MMX_CODE'
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

