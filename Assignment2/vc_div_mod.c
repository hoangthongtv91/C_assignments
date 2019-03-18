/**
 * File       : vc_div_mod.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
#include <stdio.h>
void vc_div_mod(int a, int b, int *div, int *mod){
    int x = a/b;
    int y = a%b;
    div = &x;
    mod = &y;
}