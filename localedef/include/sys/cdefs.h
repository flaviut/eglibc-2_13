#ifdef HAVE_SYS_CDEFS_H
#include_next <sys/cdefs.h>
#endif

#ifndef __THROW
#define __THROW
#endif

#ifndef __BEGIN_DECLS
#define __BEGIN_DECLS
#endif

#ifndef __END_DECLS
#define __END_DECLS
#endif

#ifndef __BEGIN_NAMESPACE_STD
#define __BEGIN_NAMESPACE_STD
#endif

#ifndef __END_NAMESPACE_STD
#define __END_NAMESPACE_STD
#endif

#ifndef __flexarr
#define __flexarr [0]
#endif

#ifndef __extern_inline
#ifdef __GNUC_STDC_INLINE__
# define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
# define __extern_always_inline \
  extern __always_inline __attribute__ ((__gnu_inline__))
#else
# define __extern_inline extern __inline
# define __extern_always_inline extern __always_inline
#endif
#endif

#if !defined(__REDIRECT_NTH) && defined(__GNUC__) && __GNUC__ >= 2
# ifdef __cplusplus
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __THROW __asm__ (__ASMNAME (#alias))
# else
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROW
# endif
#endif
