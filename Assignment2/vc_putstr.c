/**
 * File       : vc_putstr.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
#include <stdio.h>

void vc_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        putchar(str[i]);
        i++;
    }
}