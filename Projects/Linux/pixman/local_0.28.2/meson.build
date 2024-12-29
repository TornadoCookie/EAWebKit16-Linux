
project('pixman', 'c', version : 'local_0.28.2')

# pixman.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/include'
)

sources = [
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-access.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-access-accessors.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-arm.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-bits-image.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-combine32.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-combine-float.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-conical-gradient.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-edge.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-edge-accessors.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-fast-path.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-general.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-glyph.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-gradient-walker.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-image.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-implementation.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-linear-gradient.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-matrix.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-mips.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-noop.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-ppc.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-radial-gradient.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-region16.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-region32.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-solid-fill.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-timer.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-trap.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-utils.c',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/source/pixman-x86.c'

]

cxxflags = [
    '-DPACKAGE_BUGREPORT=',
    '-DPACKAGE_VERSION=',
    '-DPACKAGE=pixman',
    '-DPIXMAN_NO_TLS',
    '-DUSE_SSE2',
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

