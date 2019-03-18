/**
 * File              : vc_strlcat.c
 * Author            : Ayana, Tom
 * Date              : Sat, Feb 9, 2019
 */

#include <stdio.h>

unsigned int vc_strlcat(char *dest, char *src, unsigned int size){
    while(!(dest == NULL)){
        int dest_len = 0;
        while (*dest != '\0'){
            dest_len++;
            dest++;
        }
        while (size <= dest_len){
            int src_len = 0;
            while (*src != '\0'){
                src_len++;
                src++;
            }
            return src_len + size;
        }
        return 0;
    }    
    return 0;
}