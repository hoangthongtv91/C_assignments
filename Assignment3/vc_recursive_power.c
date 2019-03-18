/**
 * File       : vc_recursive_power.c
 * Author      : Kazuya, Tom
 * Date       : Thur, Feb 7, 2019
 */
#include <stdio.h>

int vc_recursive_power(int n, int power){
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;    
    return (n * vc_recursive_power(n,power -1));
}
