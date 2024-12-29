
project('cairo', 'c', version : 'local-1.12.14')

# EAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/include/cairo',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/include',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/install',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7-01/include',
    '../../../../EAWebKitSupportPackages/libpngEAWebKit/local-1.01.00-01/include/libpng',
    '../../../../EAWebKitSupportPackages/pixman/local-0.28.2/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/include/cairo',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/include'
)

sources = [
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-analysis-surface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-arc.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-array.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-atomic.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-base85-stream.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-bentley-ottmann.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-bentley-ottmann-rectangular.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-bentley-ottmann-rectilinear.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-boxes.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-boxes-intersect.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-cache.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-cff-subset.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-clip.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-clip-boxes.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-clip-polygon.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-clip-region.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-clip-surface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-clip-tor-scan-converter.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-color.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-composite-rectangles.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-contour.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-damage.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-debug.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-default-context.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-device.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-error.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-fallback-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-fixed.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-font-face.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-font-face-twin.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-font-face-twin-data.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-font-options.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-freelist.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-gstate.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-hash.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-hull.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-image-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-image-info.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-image-source.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-image-surface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-lzw.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-mask-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-matrix.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-mesh-pattern-rasterizer.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-misc.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-mono-scan-converter.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-mutex.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-no-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-observer.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-output-stream.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-paginated-surface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-bounds.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-fill.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-fixed.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-in-fill.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-stroke.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-stroke-boxes.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-stroke-polygon.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-stroke-traps.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-path-stroke-tristrip.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-pattern.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-pen.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-png.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-polygon.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-polygon-intersect.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-polygon-reduce.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-raster-source-pattern.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-recording-surface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-rectangle.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-rectangular-scan-converter.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-region.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-scaled-font.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-scaled-font-subsets.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-shape-mask-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-slope.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-spans.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-spans-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-spline.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-stroke-dash.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-stroke-style.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface-clipper.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface-fallback.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface-offset.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface-snapshot.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface-subsurface.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-surface-wrapper.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-tor22-scan-converter.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-tor-scan-converter.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-toy-font-face.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-traps.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-traps-compositor.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-tristrip.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-truetype-subset.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-type1-fallback.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-type1-glyph-names.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-type1-subset.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-unicode.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-user-font.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-version.c',
    '../../../../EAWebKitSupportPackages/cairo/local-1.12.14/source/cairo-wideint.c'

]

cxxflags = [
    '-DCAIRO_DISABLE_TMPFILE',
    '-DCAIRO_NO_MUTEX=1',
    '-Dcairo_public=',
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
else
  cxxflags += '-DNDEBUG' 
endif

dependencies = [
    dependency('libpngEAWebKit', fallback : [ 'libpngEAWebKit', 'libpngEAWebKit_dep' ]),
    dependency('pixman', fallback : [ 'pixman', 'pixman_dep' ]),
    dependency('zlibEAWebKit', fallback : [ 'zlibEAWebKit', 'zlibEAWebKit_dep' ])
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

