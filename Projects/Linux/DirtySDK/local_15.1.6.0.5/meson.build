
project('dirtysock', ['c', 'cpp'], version : 'local_15.1.6.0.5')

# dirtysock.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/include',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/misc',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/include'
)

sources = [
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/comm/commsrp.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/comm/commudp.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/comm/commudputil.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptaes.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptarc4.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptbn.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptchacha.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptcurve.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptgcm.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/crypthash.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/crypthmac.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptmd5.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptmont.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptnist.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptrand.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptrandcommon.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptrsa.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptsha1.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/crypt/cryptsha2.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtyaddr.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtycert.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtyerr.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtylib.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtylib.cpp',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtymem.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtynames.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtynet.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtythread.cpp',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/dirtyuser.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/netconn.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/netconncommon.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/unix/dirtyerrunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/unix/dirtylibunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/unix/dirtynetunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/dirtysock/unix/netconnunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/game/connapi.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/game/netgamedist.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/game/netgamedistserv.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/game/netgamelink.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/game/netgameutil.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/graph/dirtygif.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/graph/dirtygraph.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/graph/dirtyjpg.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/graph/dirtypng.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/misc/qosclient.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/misc/qoscommon.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/misc/weblog.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/platform/plat-str.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/platform/plat-time.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protoadvt.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protohttp.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protohttp2.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protohttpmanager.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protohttpserv.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protohttputil.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protomangle.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protoname.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protossl.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protostream.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/prototunnel.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protoupnp.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/proto/protowebsocket.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/aws.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/base64.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/binary7.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/hpack.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/jsonformat.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/jsonparse.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/murmurhash3.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/protobufcommon.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/protobufread.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/protobufwrite.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/util/utf8.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voip.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipblocklist.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipcodec.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipcommon.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipconduit.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipconnection.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipdvi.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipgroup.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voipmixer.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voippcm.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voiptranscribe.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/voiptunnel.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/voip/unix/voipunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/xml/xmlformat.c',
    '../../../../EAWebKitSupportPackages/DirtySDK/local_15.1.6.0.5/source/xml/xmlparse.c'
    
]

cflags = [
  '-D_GNU_SOURCE',
  '-Wno-multichar'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cflags += '-D_DEBUG'
  cflags += '-DEA_DEBUG'
else
  cflags += '-DNDEBUG' 
endif

cxxflags = cflags + '-std=c++17'

dependencies = [
    dependency('EABase', fallback : [ 'EABase', 'EABase_dep' ])
]

target = static_library(
  libn,
  sources,
  cpp_args : cxxflags,
  c_args : cflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

