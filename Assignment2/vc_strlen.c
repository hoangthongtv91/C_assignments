/**
 * File       : vc_strlen.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
#include <stdio.h>

int vc_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
