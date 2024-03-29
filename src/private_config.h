/******************************************************************
 * This file is generated from private_config.h.in.  Do not edit. *
 ******************************************************************/
#ifndef PRIVATE_CONFIG_H
#define PRIVATE_CONFIG_H

/* #undef HAVE_STRL */
#define HAVE_MKSTEMP

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gpuarray/config.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifdef CONFUSE_EMACS
}
#endif

#ifdef _MSC_VER
/* God damn Microsoft ... */
#define snprintf _snprintf
#define strdup _strdup
#define alloca _alloca
#endif

#ifdef _MSC_VER
#define SPREFIX "I"
#else
#define SPREFIX "z"
#endif

#define nelems(a) (sizeof(a)/sizeof(a[0]))

#ifndef HAVE_MKSTEMP
int mkstemp(char *path);
#endif

#ifndef HAVE_STRL
size_t strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);
#endif

#ifdef __cplusplus
}
#endif

#endif
