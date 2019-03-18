/**
 * File       : vc_ultimate_div_mod.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
#include <stdio.h>

void vc_ultimate_div_mod(int *a, int *b){
    int x = (*a)/(*b);
    int y = (*a)%(*b);
    a = &x;
    b = &y;
}
