#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    int sum = 0;
    
    if (n == 1)
        return 1;
    else
        return (2*n - 1) + sumn(n - 1);
}