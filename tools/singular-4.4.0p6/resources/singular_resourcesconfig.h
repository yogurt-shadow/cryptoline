#ifndef _SINGULAR_RESOURCES_SINGULAR_RESOURCESCONFIG_H
#define _SINGULAR_RESOURCES_SINGULAR_RESOURCESCONFIG_H 1
 
/* singular_resourcesconfig.h. Generated automatically at end of configure. */
 
/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* bindir */
#ifndef BIN_DIR
#define BIN_DIR "/usr/local/bin"
#endif

/* datadir */
#ifndef DATA_DIR
#define DATA_DIR "/usr/local/share"
#endif

/* htmldir */
#ifndef DATA_TO_HTML_DIR
#define DATA_TO_HTML_DIR "%D/doc/singular"
#endif

/* exec_prefix */
#ifndef EXEC_PREFIX
#define EXEC_PREFIX "NONE"
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef HAVE_DLFCN_H
#define HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the `getcwd' function. */
#ifndef HAVE_GETCWD
#define HAVE_GETCWD 1
#endif

/* Define to 1 if you have the `getpwnam' function. */
#ifndef HAVE_GETPWNAM
#define HAVE_GETPWNAM 1
#endif

/* Define to 1 if you have the `getwd' function. */
#ifndef HAVE_GETWD
#define HAVE_GETWD 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the `putenv' function. */
#ifndef HAVE_PUTENV
#define HAVE_PUTENV 1
#endif

/* Define to 1 if you have the <pwd.h> header file. */
#ifndef HAVE_PWD_H
#define HAVE_PWD_H 1
#endif

/* Define to 1 if you have the `readlink' function. */
#ifndef HAVE_READLINK
#define HAVE_READLINK 1
#endif

/* Define to 1 if you have the `setenv' function. */
#ifndef HAVE_SETENV
#define HAVE_SETENV 1
#endif

/* Define to 1 if stdbool.h conforms to C99. */
#ifndef HAVE_STDBOOL_H
#define HAVE_STDBOOL_H 1
#endif

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

/* Define to 1 if you have the <strings.h> header file. */
#ifndef HAVE_STRINGS_H
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef HAVE_STRING_H
#define HAVE_STRING_H 1
#endif

/* Define to 1 if you have the <sys/param.h> header file. */
#ifndef HAVE_SYS_PARAM_H
#define HAVE_SYS_PARAM_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef HAVE_UNISTD_H
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if the system has the type `_Bool'. */
#ifndef HAVE__BOOL
#define HAVE__BOOL 1
#endif

/* libexecdir */
#ifndef LIBEXEC_DIR
#define LIBEXEC_DIR "/usr/local/libexec"
#endif

/* libdir */
#ifndef LIB_DIR
#define LIB_DIR "/usr/local/lib"
#endif

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#ifndef LT_OBJDIR
#define LT_OBJDIR ".libs/"
#endif

/* "Disable OM Debug" */
#ifndef OM_NDEBUG
#define OM_NDEBUG 1
#endif

/* Name of package */
#ifndef PACKAGE
#define PACKAGE "singular_resources"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef PACKAGE_BUGREPORT
#define PACKAGE_BUGREPORT ""
#endif

/* Define to the full name of this package. */
#ifndef PACKAGE_NAME
#define PACKAGE_NAME "singular_resources"
#endif

/* Define to the full name and version of this package. */
#ifndef PACKAGE_STRING
#define PACKAGE_STRING "singular_resources 4.4.0"
#endif

/* Define to the one symbol short name of this package. */
#ifndef PACKAGE_TARNAME
#define PACKAGE_TARNAME "singular_resources"
#endif

/* Define to the home page for this package. */
#ifndef PACKAGE_URL
#define PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef PACKAGE_VERSION
#define PACKAGE_VERSION "4.4.0"
#endif

/* prefix */
#ifndef PREFIX
#define PREFIX "/usr/local"
#endif

/* SINGULAR_CFLAGS */
#ifndef SINGULAR_CFLAGS
#define SINGULAR_CFLAGS "-DSING_NDEBUG -DOM_NDEBUG"
#endif

/* "Disable Singular Debug" */
#ifndef SING_NDEBUG
#define SING_NDEBUG 1
#endif

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#ifndef STDC_HEADERS
#define STDC_HEADERS 1
#endif

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

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
 
/* once: _SINGULAR_RESOURCES_SINGULAR_RESOURCESCONFIG_H */
#endif
