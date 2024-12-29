
project('EACallstack', 'cpp', version : 'local_2.03.04')

# EACallstack.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/include',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/EAAssert/local_1.05.11/include',
    '../../../../EAWebKitSupportPackages/EAStdC/local_1.26.08/include',
    '../../../../EAWebKitSupportPackages/coreallocator/local_1.04.05/include',
    '../../../../EAWebKitSupportPackages/EASTL/local_3.16.05/include',
    '../../../../EAWebKitSupportPackages/EAIO/local_3.01.13/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/include'
)

sources = [ 
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/AddressRepCache.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/AddressRepLookupSet.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/Allocator.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/DWARF3File.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EAAddressRep.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EACallstack.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EACallstackRecorder.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EACallstackUtils.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EADasm.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EADasmARM.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EADasmARMThumb.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EADasmPowerPC.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EADasmx86.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EAModule.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/EASymbolUtil.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/ELFFile.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/MapFile.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/PDBFile.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/internal/CabReader.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/internal/cxa_demangle.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/internal/DemangleGCC.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/internal/Minidump.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/internal/Win32Runner.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/platform/unix/EACallstack_execinfo.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/platform/unix/EACallstack_unix.cpp',
    '../../../../EAWebKitSupportPackages/EACallstack/local_2.03.04/source/platform/unix/EACallstack_unwind.cpp',
]

cxxflags = [
  '-DEASTL_CORE_ALLOCATOR_ENABLED=1',
  '-DEASTL_EASTDC_VSNPRINTF=1',
  '-DUTF_USE_EAASSERT=1',
  '-std=c++17',
  '-Wno-c++20-compat'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
  cxxflags += '-DEA_SCEDBG_ENABLED=1'
else
  cxxflags += '-DNDEBUG' 
  cxxflags += '-DEA_SCEDBG_ENABLED=0'
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

