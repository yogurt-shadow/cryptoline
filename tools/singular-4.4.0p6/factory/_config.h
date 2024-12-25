/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* define to use "configurable inline methods" (see cf_inline.cc) */
#define CF_USE_INLINE 1

/* define if you want to have debugging output */
/* #undef DEBUGOUTPUT */

/* DISABLE_GMP_CPP */
#define DISABLE_GMP_CPP 1

/* factory configuration */
#define FACTORYCONFIGURATION "' '--disable-option-checking' '--prefix=/usr/local' '--enable-gfanlib' '--enable-omalloc' 'OMALLOC_LIBS=/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/omalloc/libomalloc.la' 'OMALLOC_INCLUDES=-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6' '--htmldir=/usr/local/share/doc/singular' '--with-Singular' 'RESOURCES_LIBS=/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/resources/libsingular_resources.la' 'RESOURCES_INCLUDES=-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6 ' 'FACTORY_LIBS=/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory/libfactory.la' 'FACTORY_INCLUDES=-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6 -I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory -I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory/include' '--cache-file=/dev/null' '--srcdir=.'' in /home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory"

/* VERSION */
#define FACTORYVERSION "4.4.0"

/* Define to 1 if you have the <cstdio> header file. */
#define HAVE_CSTDIO 1

/* Define to 1 if you have the <ctype.h> header file. */
/* #undef HAVE_CTYPE_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <errno.h> header file. */
/* #undef HAVE_ERRNO_H */

/* Define if FLINT is installed */
#define HAVE_FLINT 1

/* Define to 1 if you have the <fstream> header file. */
/* #undef HAVE_FSTREAM */

/* Define to 1 if you have the <fstream.h> header file. */
/* #undef HAVE_FSTREAM_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <iostream> header file. */
/* #undef HAVE_IOSTREAM */

/* Define to 1 if you have the <iostream.h> header file. */
/* #undef HAVE_IOSTREAM_H */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define if NTL is installed */
#define HAVE_NTL 1

/* define if build with OMALLOC */
#define HAVE_OMALLOC 1

/* Define to 1 if you have the <omalloc/omalloc.h> header file. */
/* #undef HAVE_OMALLOC_OMALLOC_H */

/* Define to 1 if you have the <signal.h> header file. */
/* #undef HAVE_SIGNAL_H */

/* Define to 1 if you have the <stdarg.h> header file. */
/* #undef HAVE_STDARG_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <string> header file. */
/* #undef HAVE_STRING */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <strstream.h> header file. */
/* #undef HAVE_STRSTREAM_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
/* #undef HAVE_SYS_TIMES_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* define if you do not want to activate assertions */
/* #undef NOASSERT */

/* define to build factory without stream IO */
#define NOSTREAMIO 1

/* "Disable OM Debug" */
#define OM_NDEBUG 1

/* Name of package */
#define PACKAGE "factory"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "factory"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "factory 4.4.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "factory"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.0"

/* define if linked to Singular */
#define SINGULAR 1

/* SINGULAR_CFLAGS */
#define SINGULAR_CFLAGS "-DSING_NDEBUG -DOM_NDEBUG"

/* "Disable Singular Debug" */
#define SING_NDEBUG 1

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* define if you want to activate the timing stuff */
/* #undef TIMING */

/* Version number of package */
#define VERSION "4.4.0"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
