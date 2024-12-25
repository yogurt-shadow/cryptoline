/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* DISABLE_GMP_CPP */
#define DISABLE_GMP_CPP 1

/* GMP_CPPFLAGS */
#define GMP_CPPFLAGS ""

/* GMP_LIBS */
#define GMP_LIBS "-lgmp"

/* enable dynamic modules */
#define HAVE_DL 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* enable dynamic modules */
#define HAVE_DYNAMIC_LOADING 1

/* enable dynamic p-procs */
#define HAVE_DYNAMIC_PPROCS 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <factory/factory.h> header file. */
/* #undef HAVE_FACTORY_FACTORY_H */

/* Define if FLINT is installed */
#define HAVE_FLINT 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* define if the compiler supports GCC C++ ABI name demangling */
/* #undef HAVE_GCC_ABI_DEMANGLE */

/* use branch for addition in Z/p otherwise it uses a generic add */
#define HAVE_GENERIC_ADD 1

/* multiplication is fast on the cpu: a*b is with mod otherwise using tables
   of logartihms */
/* #undef HAVE_GENERIC_MULT */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* division via a table of logarithms */
/* #undef HAVE_INVTABLE */

/* Define if julia is installed */
/* #undef HAVE_JULIA */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define if NTL is installed */
#define HAVE_NTL 1

/* define if build with OMALLOC */
#define HAVE_OMALLOC 1

/* Define to 1 if you have the <omalloc/omalloc.h> header file. */
/* #undef HAVE_OMALLOC_OMALLOC_H */

/* Enable non-commutative subsystem */
#define HAVE_PLURAL 1

/* Define to 1 if you have the `pow' function. */
/* #undef HAVE_POW */

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Enable RatGB support */
/* #undef HAVE_RATGRING */

/* Enable arithmetical rings */
#define HAVE_RINGS 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Enable letterplace */
#define HAVE_SHIFTBBA 1

/* Define to 1 if you have the `sqrt' function. */
/* #undef HAVE_SQRT */

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define if vsnprintf exists. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* DISABLE_GMP_CPP */
#define NOSTREAMIO 1

/* NTL_CPPFLAGS */
#define NTL_CPPFLAGS ""

/* NTL_LIBS */
#define NTL_LIBS "-lntl"

/* "Disable OM Debug" */
#define OM_NDEBUG 1

/* Name of package */
#define PACKAGE "libpolys"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "libpolys"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libpolys 4.4.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libpolys"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.0"

/* SINGULAR */
#define SINGULAR 1

/* SINGULAR_CFLAGS */
#define SINGULAR_CFLAGS "-DSING_NDEBUG -DOM_NDEBUG"

/* "Disable Singular Debug" */
#define SING_NDEBUG 1

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* "i686" */
/* #undef SI_CPU_I386 */

/* "ia64" */
/* #undef SI_CPU_IA64 */

/* "PPC" */
/* #undef SI_CPU_PPC */

/* "SPARC" */
/* #undef SI_CPU_SPARC */

/* "x86-64" */
#define SI_CPU_X86_64 1

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Singular\'s own uname\ */
#define S_UNAME "x86_64-Linux"

/* Version number of package */
#define VERSION "4.4.0"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
