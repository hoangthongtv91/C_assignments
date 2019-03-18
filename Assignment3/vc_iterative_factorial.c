/**
 * File       : vc_iterative_factorial.c
 * Author      : Kazuya, Tom
 * Date       : Thur, Feb 7, 2019
 */
#include <stdio.h>

int iterative_factorial(int n){
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    int total = 1;
    for (int i = 1; i <= n; i++){
        total *=i;        
    }
    if (total == NULL || total < 0)
        return 0;

    return total;
}