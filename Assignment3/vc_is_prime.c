/**
 * File       : vc_is_prime.c
 * Author      : Kazuya, Tom
 * Date       : Thur, Feb 7, 2019
 */

#include <stdio.h>
#include <time.h>
int vc_is_prime(int n)
{
    clock_t start, end;
    start = clock();

    if (n == 0 || n == 1)
    {
        return 0;
    }

    for (int i = n - 1; 1 < i; i--)
    {
        if (n % i == 0)
        {
            end = clock();
            printf("Time is %.5f second\n", (double)(end - start) / CLOCKS_PER_SEC);
            return 0;
        }
    }

    end = clock();
    printf("Time is %.5f second\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 1;
}