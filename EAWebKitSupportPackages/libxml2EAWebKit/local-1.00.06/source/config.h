/* config.h.in.  Generated from configure.in by autoheader.  */
#undef PACKAGE
#undef VERSION
#undef HAVE_LIBZ
#undef HAVE_LIBM
#undef HAVE_ISINF
#undef HAVE_ISNAN
#undef HAVE_LIBHISTORY
#undef HAVE_LIBREADLINE
#undef HAVE_LIBPTHREAD
#undef HAVE_PTHREAD_H

/* Define if IPV6 support is there */
#undef SUPPORT_IP6

/* Define if getaddrinfo is there */
#undef HAVE_GETADDRINFO

/* Define to 1 if you have the <ansidecl.h> header file. */
#undef HAVE_ANSIDECL_H

/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#undef HAVE_ARPA_NAMESER_H

/* Whether struct sockaddr::__ss_family exists */
#undef HAVE_BROKEN_SS_FAMILY

/* Define to 1 if you have the `class' function. */
#undef HAVE_CLASS

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <dirent.h> header file. */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Have dlopen based dso */
#undef HAVE_DLOPEN

/* Define to 1 if you have the <dl.h> header file. */
#undef HAVE_DL_H

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#undef HAVE_FCNTL_H

/* Define to 1 if you have the `finite' function. */
#undef HAVE_FINITE

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `fpclass' function. */
#undef HAVE_FPCLASS

/* Define to 1 if you have the `fprintf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_FPRINTF
#else
    #define HAVE_FPRINTF 1
#endif

/* Define to 1 if you have the `fp_class' function. */
#undef HAVE_FP_CLASS

/* Define to 1 if you have the <fp_class.h> header file. */
#undef HAVE_FP_CLASS_H

/* Define to 1 if you have the `ftime' function. */
#undef HAVE_FTIME

/* Define if getaddrinfo is there */
#undef HAVE_GETADDRINFO

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define if isinf is there */
#undef HAVE_ISINF

/* Define if isnan is there */
#undef HAVE_ISNAN

/* Define to 1 if you have the `isnand' function. */
#undef HAVE_ISNAND

/* Define if history library is there (-lhistory) */
#undef HAVE_LIBHISTORY

/* Define if pthread library is there (-lpthread) */
#undef HAVE_LIBPTHREAD

/* Define if readline library is there (-lreadline) */
#undef HAVE_LIBREADLINE

/* Have compression library */
#undef HAVE_LIBZ

/* Define to 1 if you have the <limits.h> header file. */
#undef HAVE_LIMITS_H

/* Define to 1 if you have the `localtime' function. */
#undef HAVE_LOCALTIME

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <math.h> header file. */
#undef HAVE_MATH_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <nan.h> header file. */
#undef HAVE_NAN_H

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the `printf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_PRINTF
#else
    #define HAVE_PRINTF 1
#endif

/* Define if <pthread.h> is there */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the <resolv.h> header file. */
#undef HAVE_RESOLV_H

/* Have shl_load based dso */
#undef HAVE_SHLLOAD

/* Define to 1 if you have the `signal' function. */
#undef HAVE_SIGNAL

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H

/* Define to 1 if you have the `snprintf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_SNPRINTF
#else
    #define HAVE_SNPRINTF 1
#endif

/* Define to 1 if you have the `sprintf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_SPRINTF
#else
    #define HAVE_SPRINTF 1
#endif

/* Define to 1 if you have the `sscanf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_SSCANF
#else
    #define HAVE_SSCANF 1
#endif

/* Define to 1 if you have the `stat' function. */
#undef HAVE_STAT

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#if defined(_MSC_VER)
    #undef HAVE_STDINT_H
#else
    #define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the `strdup' function. */
#undef HAVE_STRDUP

/* Define to 1 if you have the `strerror' function. */
#undef HAVE_STRERROR

/* Define to 1 if you have the `strftime' function. */
#undef HAVE_STRFTIME

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the `strndup' function. */
#undef HAVE_STRNDUP

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/mman.h> header file. */
#undef HAVE_SYS_MMAN_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/select.h> header file. */
#undef HAVE_SYS_SELECT_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/timeb.h> header file. */
#undef HAVE_SYS_TIMEB_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Whether va_copy() is available */
#if !defined(_MSC_VER)
    #define HAVE_VA_COPY 1
#endif

/* Define to 1 if you have the `vfprintf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_VFPRINTF
#else
    #define HAVE_VFPRINTF 1
#endif

/* Define to 1 if you have the `vsnprintf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_VSNPRINTF
#else
    #define HAVE_VSNPRINTF 1
#endif

/* Define to 1 if you have the `vsprintf' function. */
#if defined(EA_PLATFORM_REVOLUTION) || defined(EA_PLATFORM_CAFE)
    #undef HAVE_VSPRINTF
#else
    #define HAVE_VSPRINTF 1
#endif

/* Define to 1 if you have the <zlib.h> header file. */
#undef HAVE_ZLIB_H

/* Define to 1 if you have the `_stat' function. */
#undef HAVE__STAT

/* Whether __va_copy() is available */
#if !defined(_MSC_VER)
    #define HAVE___VA_COPY 1
#endif

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if the C compiler supports function prototypes. */
#undef PROTOTYPES

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Support for IPv6 */
#undef SUPPORT_IP6

/* Version number of package */
#undef VERSION

/* Determine what socket length (socklen_t) data type is */
#undef XML_SOCKLEN_T

/* Using the Win32 Socket implementation */
#if defined(_MSC_VER)
    #define _WINSOCKAPI_ 1
#endif

/* Define like PROTOTYPES; this can be used by system headers. */
#undef __PROTOTYPES

/* Win32 Std C name mangling work-around */
#if defined(_MSC_VER) && _MSC_VER < 1900
    #define snprintf _snprintf
#endif

/* ss_family is not defined here, use __ss_family instead */
#undef ss_family

/* Win32 Std C name mangling work-around */
#if defined(_MSC_VER) && (_MSC_VER < 1500)
    #define vsnprintf(b,c,f,a) _vsnprintf(b,c,f,a)
#endif

