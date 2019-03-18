/**
 * File       : vc_swap.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
#include <stdio.h>
void vc_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
