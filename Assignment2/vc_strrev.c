/**
 * File       : vc_strrev.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
 
#include <stdio.h>
 
int vc_strrev(char *str)
{
    char n[100];
    int b, e, c = 0;
 
    while (str[c] != '\0')
        c++;
 
      e = c - 1;
   
     for (b = 0; b < c; b++) {
       n[b] = str[e];
       e--;
    }
 
    n[b] = '\0';
    return 0;
}