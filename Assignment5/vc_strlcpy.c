/**
 * File              : vc_strlcpy.c
 * Author            : Ayana, Tom
 * Date              : Sat, Feb 9, 2019
 */

#include <stdio.h>

unsigned int vc_strlcpy(char *dest, char *src, unsigned int size){
    while (!(src == NULL)){
        int src_len = 0;
        while (*src != '\0'){
            src_len++;
            src++;
        }
        return src_len;
    }
    return 0;
}

