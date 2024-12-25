/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <malloc/malloc.h> header file. */
/* #undef HAVE_MALLOC_MALLOC_H */

/* Define to 1 if you have the `malloc_size' function. */
/* #undef HAVE_MALLOC_SIZE */

/* Define to 1 if you have the `malloc_usable_size' function. */
#define HAVE_MALLOC_USABLE_SIZE 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* define if build with OMALLOC */
#define HAVE_OMALLOC 1

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if you have the `sbrk' function. */
#define HAVE_SBRK 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* "Whether we have a working mmap" */
#define HAVE_WORKING_MMAP 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* use external malloc as system allocator */
/* #undef OMALLOC_USES_EXTERNAL_MALLOC */

/* the system allocator is called malloc */
#define OMALLOC_USES_MALLOC 1

/* use system malloc as system allocator */
#define OMALLOC_USES_SYSTEM_MALLOC 1

/* "Whether alignment needs work" */
/* #undef OM_ALIGNMENT_NEEDS_WORK */

/* "Align to 8 bytes" */
#define OM_ALIGN_8 1

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
#define OM_HAVE_VALLOC_MMAP 1

/* "inline-declaration" */
#define OM_INLINE static inline

/* "inline-declaration" */
#define OM_INLINE_DECL static inline

/* "inline-declaration" */
#define OM_INLINE_IMPL static inline

/* "inline-declaration" */
#define OM_INLINE_LOCAL static inline

/* "Internal debug" */
/* #undef OM_INTERNAL_DEBUG */

/* "Disable debug" */
#define OM_NDEBUG 1

/* "Name of addr2line" */
#define OM_PROG_ADDR2LINE "addr2line"

/* Provide NO standard routines! */
#define OM_PROVIDE_MALLOC 0

/* "Whether to track backtrace" */
/* #undef OM_TRACK_BACKTRACE */

/* "Enable custom tracking" */
/* #undef OM_TRACK_CUSTOM */

/* "Whether to track file-line" */
#define OM_TRACK_FILE_LINE 1

/* "Whether to track return" */
/* #undef OM_TRACK_RETURN */

/* Name of package */
#define PACKAGE "omalloc"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "omalloc"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "omalloc 0.9.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "omalloc"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.9.6"

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* Page-size of the build-system */
#define SIZEOF_OM_PAGE SIZEOF_SYSTEM_PAGE

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* "Page-size of the build-system" */
#define SIZEOF_SYSTEM_PAGE 4096

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 8

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.9.6"

/* "Type of void" */
#define Void_t void

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
