/* @(#)w_lgamma.c 5.1 93/09/24 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

/* double lgamma(double x)
 * Return the logarithm of the Gamma function of x.
 *
 * Method: call __ieee754_lgamma_r
 */

/* Dong Xie 2012-05-08, modified for Windows use 
*   we are not dealing with lgamma pole/overflow here
*/

#include <math.h>
#include "math_private.h"

double
__lgamma(double x)
{
    int local_signgam = 0;
    double y = __ieee754_lgamma_r(x, &local_signgam);

    //if(__builtin_expect(!__finite(y), 0)
    //   && __finite(x) && _LIB_VERSION != _IEEE_)
    //	return __kernel_standard(x, x,
    //				 __floor(x)==x&&x<=0.0
    //				 ? 15 /* lgamma pole */
    //				 : 14); /* lgamma overflow */
    
    return y;
}
