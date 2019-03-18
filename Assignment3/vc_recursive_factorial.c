/**
 * File       : vc_recursive_factorial.c
 * Author      : Kazuya, Tom
 * Date       : Thur, Feb 7, 2019
 */
#include <stdio.h>

int vc_recursive_factorial(int n)
{   if (n < 0)
        return 0; 
    if (n == 0)
        return 1;
    if (n > 31)
        return 0;
    if (n == 1)
        return 1;
    return (n * vc_recursive_factorial(n-1));
}