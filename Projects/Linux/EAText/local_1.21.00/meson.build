
project('EAText', 'cpp', version : 'local_1.21.00')

# EAText.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/include',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/include',
    '../../../../EAWebKitSupportPackages/coreallocator/local_1.04.05/include',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/include',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/include',
    '../../../../EAWebKitSupportPackages/FreeType/local_2.9.0.02/installed/include',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/include',
    '../../../../EAWebKitSupportPackages/PPMalloc/local_1.26.11/extras'

)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/include'
)

sources = [  
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EAText.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextBaseline.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextBmpFont.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextBreak.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextCache.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextCollation.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextCompression.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextDebugFont.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextEffects.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextFont.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextFontServer.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextLayout.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextOutlineFont.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextPolygonFont.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextScript.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextStyle.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextStyleReader.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextTypesetter.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/EATextUnicode.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/OpenGL_ES/EATextGlyphCache_OpenGL_ES.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextBidi.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextBitmap.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextOpenType.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextShapeArabic.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextShapeGeneral.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextShapeHangul.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextShapeHebrew.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextShapeIndic.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextShapeThai.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextSquish.cpp',
    '../../../../EAWebKitSupportPackages/EAText/local_1.21.00/source/internal/EATextStream.cpp',

]

cxxflags = [
  '-DEASTL_CORE_ALLOCATOR_ENABLED=1',
  '-DEASTL_EASTDC_VSNPRINTF=1',
  '-DEATEXT_BITMAP_USE_EAGIMEX=0',
  '-DEATEXT_USE_FREETYPE=1',
  '-DUTF_USE_EAASSERT=1',
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

