/**
 * File       : vc_iterative_power.c
 * Author      : Kazuya, Tom
 * Date       : Thur, Feb 7, 2019
 */
#include <stdio.h>
int iterative_power(int n, int power){
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    int total = 1;
    for (int i = 1 ; i <= power; i++)
        total *=n;
    return total;
}