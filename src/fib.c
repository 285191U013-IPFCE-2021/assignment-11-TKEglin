/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition          */
/* Pre: n >= 1, p = 1, pp = 0             */
/* Post: nth number of Fibonacci sequence */
int fib (int n, int p, int pp)
{
    assert(n >= 1);

    if (n == 1)
        return p;
    else
        return fib(n - 1, p + pp, p);
}
