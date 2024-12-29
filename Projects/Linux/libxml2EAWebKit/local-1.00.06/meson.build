
project('libxml2EAWebKit', 'c', version : 'local-1.00.06')

# libxml2EAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/include',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/include'
)

sources = [
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/c14n.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/catalog.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/chvalid.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/debugXML.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/dict.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/DOCBparser.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/encoding.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/entities.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/error.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/globals.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/hash.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/HTMLparser.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/HTMLtree.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/legacy.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/list.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/parser.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/parserInternals.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/pattern.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/relaxng.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/SAX.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/SAX2.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/threads.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/tree.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/trio.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/trionan.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/triostr.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/uri.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/valid.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xinclude.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xlink.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlIO.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlmemory.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlmodule.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlreader.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlregexp.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlsave.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlschemas.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlschemastypes.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlstring.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xmlunicode.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xpath.c',
    '../../../../EAWebKitSupportPackages/libxml2EAWebKit/local-1.00.06/source/xpointer.c'
    
]

cflags = [
  '-DHAVE_CONFIG_H',
  '-DLIBXML_STATIC',
  '-DNOLIBTOOL'
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

target = static_library(
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

