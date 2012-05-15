glibc_win64
===========

Selected code bits from glibc 2.15, compiled and tested for Windows x64.

What's New

===========

2012-05-09:

1, getopt.h, getopt.c

2, whole rand48 family (e.g. drand48, etc.)

3, ieee754.h

4, math functions: lgamma, erf, erfc

2012-05-10:

1, a header for math functions: math/_math_.h

2012-05-15:

1, math function: isinf

===========

How to use: (Draft)

Pick everything you need from the tree, create a directory named e.g. glibc_win64_flat
inside your Visual Studio project code root, copy all .c and .h files into this dir.
Include all .c files into your solution.