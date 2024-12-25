#ifndef _OMALLOC_OMCONFIG_H
#define _OMALLOC_OMCONFIG_H 1
 
/* omConfig.h. Generated automatically at end of configure. */
 
/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef HAVE_DLFCN_H
#define HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#ifndef HAVE_FCNTL_H
#define HAVE_FCNTL_H 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the <limits.h> header file. */
#ifndef HAVE_LIMITS_H
#define HAVE_LIMITS_H 1
#endif

/* Define to 1 if you have the <malloc.h> header file. */
#ifndef HAVE_MALLOC_H
#define HAVE_MALLOC_H 1
#endif

/* Define to 1 if you have the <malloc/malloc.h> header file. */
/* #undef HAVE_MALLOC_MALLOC_H */

/* Define to 1 if you have the `malloc_size' function. */
/* #undef HAVE_MALLOC_SIZE */

/* Define to 1 if you have the `malloc_usable_size' function. */
#ifndef HAVE_MALLOC_USABLE_SIZE
#define HAVE_MALLOC_USABLE_SIZE 1
#endif

/* Define to 1 if you have the `mmap' function. */
#ifndef HAVE_MMAP
#define HAVE_MMAP 1
#endif

/* define if build with OMALLOC */
#ifndef HAVE_OMALLOC
#define HAVE_OMALLOC 1
#endif

/* Define to 1 if you have the `popen' function. */
#ifndef HAVE_POPEN
#define HAVE_POPEN 1
#endif

/* Define to 1 if you have the `random' function. */
#ifndef HAVE_RANDOM
#define HAVE_RANDOM 1
#endif

/* Define to 1 if you have the `sbrk' function. */
#ifndef HAVE_SBRK
#define HAVE_SBRK 1
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

/* Define to 1 if you have the <sys/mman.h> header file. */
#ifndef HAVE_SYS_MMAN_H
#define HAVE_SYS_MMAN_H 1
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

/* "Whether we have a working mmap" */
#ifndef HAVE_WORKING_MMAP
#define HAVE_WORKING_MMAP 1
#endif

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#ifndef LT_OBJDIR
#define LT_OBJDIR ".libs/"
#endif

/* use external malloc as system allocator */
/* #undef OMALLOC_USES_EXTERNAL_MALLOC */

/* the system allocator is called malloc */
#ifndef OMALLOC_USES_MALLOC
#define OMALLOC_USES_MALLOC 1
#endif

/* use system malloc as system allocator */
#ifndef OMALLOC_USES_SYSTEM_MALLOC
#define OMALLOC_USES_SYSTEM_MALLOC 1
#endif

/* "Whether alignment needs work" */
/* #undef OM_ALIGNMENT_NEEDS_WORK */

/* "Align to 8 bytes" */
#ifndef OM_ALIGN_8
#define OM_ALIGN_8 1
#endif

/* "Whether omInitGetBackTrace () works" */
/* #undef OM_GET_BACKTRACE_WORKS */

/* "Whether get return address works" */
/* #undef OM_GET_RETURN_ADDR_WORKS */

/* "Whether we have dense bins" */
/* #undef OM_HAVE_DENSE_BIN_DISTRIBUTION */

/* "Whether we have an external config.c" */
/* #undef OM_HAVE_EXTERNAL_CONFIG_C */

/* "Whether we have external config.h" */
/* #undef OM_HAVE_EXTERNAL_CONFIG_H */

/* "Whether we have the source for malloc ()" */
/* #undef OM_HAVE_MALLOC_SOURCE */

/* "Have track" */
/* #undef OM_HAVE_TRACK */

/* "Have valloc" */
/* #undef OM_HAVE_VALLOC_MALLOC */

/* "Have valloc" */
#ifndef OM_HAVE_VALLOC_MMAP
#define OM_HAVE_VALLOC_MMAP 1
#endif

/* "inline-declaration" */
#ifndef OM_INLINE
#define OM_INLINE static inline
#endif

/* "inline-declaration" */
#ifndef OM_INLINE_DECL
#define OM_INLINE_DECL static inline
#endif

/* "inline-declaration" */
#ifndef OM_INLINE_IMPL
#define OM_INLINE_IMPL static inline
#endif

/* "inline-declaration" */
#ifndef OM_INLINE_LOCAL
#define OM_INLINE_LOCAL static inline
#endif

/* "Internal debug" */
/* #undef OM_INTERNAL_DEBUG */

/* "Disable debug" */
#ifndef OM_NDEBUG
#define OM_NDEBUG 1
#endif

/* "Name of addr2line" */
#ifndef OM_PROG_ADDR2LINE
#define OM_PROG_ADDR2LINE "addr2line"
#endif

/* Provide NO standard routines! */
#ifndef OM_PROVIDE_MALLOC
#define OM_PROVIDE_MALLOC 0
#endif

/* "Whether to track backtrace" */
/* #undef OM_TRACK_BACKTRACE */

/* "Enable custom tracking" */
/* #undef OM_TRACK_CUSTOM */

/* "Whether to track file-line" */
#ifndef OM_TRACK_FILE_LINE
#define OM_TRACK_FILE_LINE 1
#endif

/* "Whether to track return" */
/* #undef OM_TRACK_RETURN */

/* Name of package */
#ifndef PACKAGE
#define PACKAGE "omalloc"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef PACKAGE_BUGREPORT
#define PACKAGE_BUGREPORT ""
#endif

/* Define to the full name of this package. */
#ifndef PACKAGE_NAME
#define PACKAGE_NAME "omalloc"
#endif

/* Define to the full name and version of this package. */
#ifndef PACKAGE_STRING
#define PACKAGE_STRING "omalloc 0.9.6"
#endif

/* Define to the one symbol short name of this package. */
#ifndef PACKAGE_TARNAME
#define PACKAGE_TARNAME "omalloc"
#endif

/* Define to the home page for this package. */
#ifndef PACKAGE_URL
#define PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef PACKAGE_VERSION
#define PACKAGE_VERSION "0.9.6"
#endif

/* The size of `double', as computed by sizeof. */
#ifndef SIZEOF_DOUBLE
#define SIZEOF_DOUBLE 8
#endif

/* The size of `long', as computed by sizeof. */
#ifndef SIZEOF_LONG
#define SIZEOF_LONG 8
#endif

/* Page-size of the build-system */
#ifndef SIZEOF_OM_PAGE
#define SIZEOF_OM_PAGE SIZEOF_SYSTEM_PAGE
#endif

/* The size of `size_t', as computed by sizeof. */
#ifndef SIZEOF_SIZE_T
#define SIZEOF_SIZE_T 8
#endif

/* "Page-size of the build-system" */
#ifndef SIZEOF_SYSTEM_PAGE
#define SIZEOF_SYSTEM_PAGE 4096
#endif

/* The size of `void*', as computed by sizeof. */
#ifndef SIZEOF_VOIDP
#define SIZEOF_VOIDP 8
#endif

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#ifndef STDC_HEADERS
#define STDC_HEADERS 1
#endif

/* Version number of package */
#ifndef VERSION
#define VERSION "0.9.6"
#endif

/* "Type of void" */
#ifndef Void_t
#define Void_t void
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
 
/* once: _OMALLOC_OMCONFIG_H */
#endif
