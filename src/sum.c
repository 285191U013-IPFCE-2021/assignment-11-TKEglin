#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n    */
/* Pre: n >= 1, total = 0 */
/* Post: Sum from 1 to n  */
int sumtail (int n, int total)
{
    assert(n >= 1);

    if(n == 1)
        return total + 1;
    else
        return sumtail(n - 1, total + n);
}

/* Sum integers 1 to n   */
/* Pre: n >= 1           */
/* Post: Sum from 1 to n */
int sumwhile (int n)
{
    int sum = 0,
        i = n;

    assert(n >= 1);

    while(i != 0) {
        sum += i;
        i--;
    }

    return sum;
}

