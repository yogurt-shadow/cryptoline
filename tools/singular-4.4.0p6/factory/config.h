#ifndef _FACTORY_CONFIG_H
#define _FACTORY_CONFIG_H 1
 
/* config.h. Generated automatically at end of configure. */
 
/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* define to use "configurable inline methods" (see cf_inline.cc) */
#ifndef CF_USE_INLINE
#define CF_USE_INLINE 1
#endif

/* define if you want to have debugging output */
/* #undef DEBUGOUTPUT */

/* DISABLE_GMP_CPP */
#ifndef DISABLE_GMP_CPP
#define DISABLE_GMP_CPP 1
#endif

/* factory configuration */
#ifndef FACTORYCONFIGURATION
#define FACTORYCONFIGURATION "' '--disable-option-checking' '--prefix=/usr/local' '--enable-gfanlib' '--enable-omalloc' 'OMALLOC_LIBS=/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/omalloc/libomalloc.la' 'OMALLOC_INCLUDES=-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6' '--htmldir=/usr/local/share/doc/singular' '--with-Singular' 'RESOURCES_LIBS=/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/resources/libsingular_resources.la' 'RESOURCES_INCLUDES=-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6 ' 'FACTORY_LIBS=/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory/libfactory.la' 'FACTORY_INCLUDES=-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6 -I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory -I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory/include' '--cache-file=/dev/null' '--srcdir=.'' in /home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory"
#endif

/* VERSION */
#ifndef FACTORYVERSION
#define FACTORYVERSION "4.4.0"
#endif

/* Define to 1 if you have the <cstdio> header file. */
#ifndef HAVE_CSTDIO
#define HAVE_CSTDIO 1
#endif

/* Define to 1 if you have the <ctype.h> header file. */
/* #undef HAVE_CTYPE_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef HAVE_DLFCN_H
#define HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the <errno.h> header file. */
/* #undef HAVE_ERRNO_H */

/* Define if FLINT is installed */
#ifndef HAVE_FLINT
#define HAVE_FLINT 1
#endif

/* Define to 1 if you have the <fstream> header file. */
/* #undef HAVE_FSTREAM */

/* Define to 1 if you have the <fstream.h> header file. */
/* #undef HAVE_FSTREAM_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the <iostream> header file. */
/* #undef HAVE_IOSTREAM */

/* Define to 1 if you have the <iostream.h> header file. */
/* #undef HAVE_IOSTREAM_H */

/* Define to 1 if you have the `m' library (-lm). */
#ifndef HAVE_LIBM
#define HAVE_LIBM 1
#endif

/* Define to 1 if you have the <math.h> header file. */
#ifndef HAVE_MATH_H
#define HAVE_MATH_H 1
#endif

/* Define if NTL is installed */
#ifndef HAVE_NTL
#define HAVE_NTL 1
#endif

/* define if build with OMALLOC */
#ifndef HAVE_OMALLOC
#define HAVE_OMALLOC 1
#endif

/* Define to 1 if you have the <omalloc/omalloc.h> header file. */
/* #undef HAVE_OMALLOC_OMALLOC_H */

/* Define to 1 if you have the <signal.h> header file. */
/* #undef HAVE_SIGNAL_H */

/* Define to 1 if you have the <stdarg.h> header file. */
/* #undef HAVE_STDARG_H */

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef HAVE_STDINT_H
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdio.h> header file. */
#ifndef HAVE_STDIO_H
#define HAVE_STDIO_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef HAVE_STDLIB_H
#define HAVE_STDLIB_H 1
#endif

/* Define to 1 if you have the <string> header file. */
/* #undef HAVE_STRING */

/* Define to 1 if you have the <strings.h> header file. */
#ifndef HAVE_STRINGS_H
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef HAVE_STRING_H
#define HAVE_STRING_H 1
#endif

/* Define to 1 if you have the <strstream.h> header file. */
/* #undef HAVE_STRSTREAM_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/times.h> header file. */
/* #undef HAVE_SYS_TIMES_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <time.h> header file. */
#ifndef HAVE_TIME_H
#define HAVE_TIME_H 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef HAVE_UNISTD_H
#define HAVE_UNISTD_H 1
#endif

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#ifndef LT_OBJDIR
#define LT_OBJDIR ".libs/"
#endif

/* define if you do not want to activate assertions */
/* #undef NOASSERT */

/* define to build factory without stream IO */
#ifndef NOSTREAMIO
#define NOSTREAMIO 1
#endif

/* "Disable OM Debug" */
#ifndef OM_NDEBUG
#define OM_NDEBUG 1
#endif

/* Name of package */
#ifndef PACKAGE
#define PACKAGE "factory"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef PACKAGE_BUGREPORT
#define PACKAGE_BUGREPORT ""
#endif

/* Define to the full name of this package. */
#ifndef PACKAGE_NAME
#define PACKAGE_NAME "factory"
#endif

/* Define to the full name and version of this package. */
#ifndef PACKAGE_STRING
#define PACKAGE_STRING "factory 4.4.0"
#endif

/* Define to the one symbol short name of this package. */
#ifndef PACKAGE_TARNAME
#define PACKAGE_TARNAME "factory"
#endif

/* Define to the home page for this package. */
#ifndef PACKAGE_URL
#define PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef PACKAGE_VERSION
#define PACKAGE_VERSION "4.4.0"
#endif

/* define if linked to Singular */
#ifndef SINGULAR
#define SINGULAR 1
#endif

/* SINGULAR_CFLAGS */
#ifndef SINGULAR_CFLAGS
#define SINGULAR_CFLAGS "-DSING_NDEBUG -DOM_NDEBUG"
#endif

/* "Disable Singular Debug" */
#ifndef SING_NDEBUG
#define SING_NDEBUG 1
#endif

/* The size of `long', as computed by sizeof. */
#ifndef SIZEOF_LONG
#define SIZEOF_LONG 8
#endif

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#ifndef STDC_HEADERS
#define STDC_HEADERS 1
#endif

/* define if you want to activate the timing stuff */
/* #undef TIMING */

/* Version number of package */
#ifndef VERSION
#define VERSION "4.4.0"
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
 
/* once: _FACTORY_CONFIG_H */
#endif
