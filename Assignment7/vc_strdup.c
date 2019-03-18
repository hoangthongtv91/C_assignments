/**
 * File              : vc_strdup.c
 * Author            : Daisuke, Tom
 * Date              : Mon, Feb 11, 2019
 */
#include <stdio.h>
#include <stdlib.h>

char *vc_strdup(char *src){

    char *result = (char *)malloc(sizeof(src));
    char *p1 = src;
    char *p2 = result;
    for (; *p1; p1++, p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';
    return result;
}
