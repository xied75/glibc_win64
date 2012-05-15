/*
* ============================================================
* Dong Xie (c) 2012-05-10
* Header file for various math functions in glibc
* (Due to the complexity of glibc header structure
*  there is no simple way to borrow a single header,
*  thus this aux header file created.)
*
* Note: many of these functions in the .c files are
*  in internal naming/format, and GCC is able to expose
*  these into normal naming/format, we lack that ability
*  in MSC, since we aim to keep maximum likeness with Glibc,
*  we'll expose these functions in their internal naming/format,
*  this force the user of this header change their code.
* ============================================================
*/

#ifndef _MATH_AUX_HEADER_DX_
#define _MATH_AUX_HEADER_DX_

#include "math_private.h"
#include "ieee754.h"

/* functions in s_erf.c */

double __erf(double x);
double __erfc(double x);

/* end of s_erf.c */

/* functions in w_lgamma.c */

double __lgamma(double x);

/* end of w_lgamma.c */

/* functions in s_isinf.c */

int __isinf (double x);

/* end of s_isinf.c */

#endif