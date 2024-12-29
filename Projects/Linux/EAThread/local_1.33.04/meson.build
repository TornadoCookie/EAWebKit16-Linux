
project('EAThread', 'cpp', version : 'local_1.33.04')

# EAThread.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include',
    '../../../../EAWebKitSupportPackages/EABase/local_2.10.01/include/Common'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/include'
)

sources = [  
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_barrier.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_callstack.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_condition.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_futex.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_mutex.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_pool.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_rwmutex.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_rwmutex_ip.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_semaphore.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_storage.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/eathread_thread.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/version.cpp',

    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_barrier_unix.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_callstack_glibc.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_condition_unix.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_mutex_unix.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_pthread_stack_info.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_semaphore_unix.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_stadia.cpp',
    '../../../../EAWebKitSupportPackages/EAThread/local_1.33.04/source/unix/eathread_thread_unix.cpp',

]

cxxflags = [
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

