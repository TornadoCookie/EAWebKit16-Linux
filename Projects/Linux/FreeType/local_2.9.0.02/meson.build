
project('FreeType', 'c', version : 'local_2.9.0.02')

# FreeType.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/include'
)

sources = [
   '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/autofit/autofit.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftbase.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftbbox.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftbitmap.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftdebug.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftfntfmt.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftfstype.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftgasp.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftglyph.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftinit.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftlcdfil.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftmm.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftpfr.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftstroke.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftsynth.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftsystem.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/fttype1.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/base/ftwinfnt.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/bdf/bdf.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/cache/ftcache.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/cff/cff.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/cid/type1cid.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/gzip/ftgzip.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/lzw/ftlzw.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/pcf/pcf.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/pfr/pfr.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/psaux/psaux.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/pshinter/pshinter.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/psnames/psmodule.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/raster/raster.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/sfnt/sfnt.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/smooth/smooth.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/truetype/truetype.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/type1/type1.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/type42/type42.c',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/src/winfonts/winfnt.c',
]

cflags = [
  '-DFT2_BUILD_LIBRARY'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cflags += '-D_DEBUG'
  cflags += '-DEA_DEBUG'
  cflags += '-DFT_DEBUG_LEVEL_ERROR'
  cflags += '-DFT_DEBUG_LEVEL_TRACE'
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

