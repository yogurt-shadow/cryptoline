/* _config.h.  Generated from _config.h.in by configure.  */
/* _config.h.in.  Generated from configure.ac by autoheader.  */

/* ac_configure_args */
#define AC_CONFIGURE_ARGS " '--enable-gfanlib' --enable-omalloc  OMALLOC_LIBS='/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/omalloc/libomalloc.la' OMALLOC_INCLUDES='-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6' --htmldir=${prefix}/share/doc/singular --with-Singular RESOURCES_LIBS='/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/resources/libsingular_resources.la' RESOURCES_INCLUDES='-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6 ' FACTORY_LIBS='/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory/libfactory.la' FACTORY_INCLUDES='-I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6 -I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory -I/home/wangzh/crypt/cryptoline/tools/singular-4.4.0p6/factory/include'"

/* bindir */
#define BIN_DIR "/usr/local/bin"

/* CC */
#define CC "gcc"

/* CFLAGS */
#define CFLAGS " -g  -pipe -fno-common -g0 -O3 -Wno-unused-function -Wno-trigraphs -Wno-unused-parameter -Wunknown-pragmas -Wno-unused-variable -fomit-frame-pointer -fwrapv -fvisibility=default -finline-functions -fno-exceptions -fconserve-space -funroll-loops -pthread"

/* CPPFLAGS */
#define CPPFLAGS ""

/* CXX */
#define CXX "g++"

/* CXXFLAGS */
#define CXXFLAGS " -pipe -fno-common -g0 -O3 -Wno-unused-function -Wno-trigraphs -Wno-unused-parameter -Wunknown-pragmas -Wno-unused-variable -fomit-frame-pointer -fwrapv -fvisibility=default -finline-functions -fno-exceptions -fno-threadsafe-statics -fno-enforce-eh-specs -fconserve-space -funroll-loops -fno-rtti -fno-delete-null-pointer-checks"

/* htmldir */
#define DATA_DIR "/usr/local/share/doc/singular"

/* DEFS */
#define DEFS ""

/* exec_prefix */
#define EXEC_PREFIX "NONE"

/* FLINT_CFLAGS */
#define FLINT_CFLAGS ""

/* FLINT_LIBS */
#define FLINT_LIBS "-lflint -lmpfr -lgmp"

/* GMP_CPPFLAGS */
#define GMP_CPPFLAGS ""

/* GMP_LIBS */
#define GMP_LIBS "-lgmp"

/* whether google perftools support is enabled */
/* #undef GOOGLE_PERFTOOLS_ENABLED */

/* whether google profiling support is enabled */
#define GOOGLE_PROFILE_ENABLED 0

/* Define to 1 if you have the <asm/sigcontext.h> header file. */
#define HAVE_ASM_SIGCONTEXT_H 1

/* Define if Ccluster is installed */
/* #undef HAVE_CCLUSTER */

/* Define to 1 if you have the <cddlib/setoper.h> header file. */
#define HAVE_CDDLIB_SETOPER_H 1

/* Define to 1 if you have the <cdd/setoper.h> header file. */
#define HAVE_CDD_SETOPER_H 1

/* Define to have dbm links */
#define HAVE_DBM 1

/* enable dynamic modules */
#define HAVE_DL 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* enable dynamic modules */
#define HAVE_DYNAMIC_LOADING 1

/* enable dynamic p-procs */
#define HAVE_DYNAMIC_PPROCS 1

/* Use dynamic readline */
/* #undef HAVE_DYN_RL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if FLINT is installed */
#define HAVE_FLINT 1

/* Define to 1 if you have the <fstream.h> header file. */
/* #undef HAVE_FSTREAM_H */

/* use branch for addition in Z/p otherwise it uses a generic add */
#define HAVE_GENERIC_ADD 1

/* multiplication is fast on the cpu: a*b is with mod otherwise using tables
   of logartihms */
/* #undef HAVE_GENERIC_MULT */

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* whether gfanlib support is enabled */
#define HAVE_GFANLIB 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* division via a table of logarithms */
/* #undef HAVE_INVTABLE */

/* Define to 1 if you have the <iomanip.h> header file. */
/* #undef HAVE_IOMANIP_H */

/* Define to 1 if you have the <iostream.h> header file. */
/* #undef HAVE_IOSTREAM_H */

/* Define to 1 if you have the `curses' library (-lcurses). */
/* #undef HAVE_LIBCURSES */

/* Define to 1 if you have the `mathic' library (-lmathic). */
/* #undef HAVE_LIBMATHIC */

/* Define to 1 if you have the `mathicgb' library (-lmathicgb). */
/* #undef HAVE_LIBMATHICGB */

/* Define to 1 if you have the `memtailor' library (-lmemtailor). */
/* #undef HAVE_LIBMEMTAILOR */

/* Define to 1 if you have the `ncurses' library (-lncurses). */
#define HAVE_LIBNCURSES 1

/* Define to 1 if you have the `readline' library (-lreadline). */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the `rt' library (-lrt). */
#define HAVE_LIBRT 1

/* Define to 1 if you have the `tbb' library (-ltbb). */
/* #undef HAVE_LIBTBB */

/* Define to 1 if you have the `termcap' library (-ltermcap). */
/* #undef HAVE_LIBTERMCAP */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define if mathicgb is to be used */
/* #undef HAVE_MATHICGB */

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the <mpfr.h> header file. */
#define HAVE_MPFR_H 1

/* Define if NTL is installed */
#define HAVE_NTL 1

/* Enable non-commutative subsystem */
#define HAVE_PLURAL 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* can embed python */
/* #undef HAVE_PYTHON */

/* Define to 1 if you have the `qsort_r' function. */
#define HAVE_QSORT_R 1

/* Enable RatGB support */
/* #undef HAVE_RATGRING */

/* Use readline */
#define HAVE_READLINE 1

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the <setoper.h> header file. */
/* #undef HAVE_SETOPER_H */

/* Enable letterplace */
#define HAVE_SHIFTBBA 1

/* Define to 1 if you have the <spasm.h> header file. */
/* #undef HAVE_SPASM_H */

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

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <termcap.h> header file. */
#define HAVE_TERMCAP_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <term.h> header file. */
#define HAVE_TERM_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* LDFLAGS */
#define LDFLAGS " -pipe -fno-common -g0 -O3 -Wno-unused-function -Wno-trigraphs -Wno-unused-parameter -Wunknown-pragmas -Wno-unused-variable -fomit-frame-pointer -fwrapv -fvisibility=default -finline-functions -fno-exceptions -fconserve-space -funroll-loops  -rdynamic -Wl,-undefined,dynamic_lookup"

/* libexecdir */
#define LIBEXEC_DIR "/usr/local/libexec"

/* LIBS */
#define LIBS "-lreadline -lncurses  -lgmp -lrt "

/* libdir */
#define LIB_DIR "/usr/local/lib"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* NTL_CPPFLAGS */
#define NTL_CPPFLAGS ""

/* NTL_LIBS */
#define NTL_LIBS "-lntl"

/* "Disable OM Debug" */
#define OM_NDEBUG 1

/* Name of package */
#define PACKAGE "singular"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "singular@mathematik.uni-kl.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "singular"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "singular 4.4.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "singular"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.0"

/* prefix */
#define PREFIX "NONE"

/* PTHREAD_CFLAGS */
#define PTHREAD_CFLAGS "-pthread"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* PTHREAD_LIBS */
#define PTHREAD_LIBS ""

/* Use readline.h */
#define READLINE_READLINE_H_OK 1

/* SINGULAR_CFLAGS */
#define SINGULAR_CFLAGS "-DSING_NDEBUG -DOM_NDEBUG"

/* "Disable Singular Debug" */
#define SING_NDEBUG 1

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* Refined list of builtin modules */
/* #undef SI_BUILTINMODULES */

/* Add(list) for Builtin modules */
#define SI_BUILTINMODULES_ADD(add) 

/* Enable autoloading of reference counted types */
/* #undef SI_COUNTEDREF_AUTOLOAD */

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

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define VERSION "4.4.0"

/* release date */
#define VERSION_DATE "Apr 2024"
