/**
 * File              : vc_count_if.c
 * Author            : Paulo, Tom
 * Date              : Thur, Feb 14, 2019
 */
#include <stdio.h>
#include <stdbool.h>

int vc_putnbr(char x){
    if (x == 97){
        return 1;
    }
    return 0;
}
int vc_count_if(char **tab, int(*f)(char*)){
    int count = 0;
    char *p = tab;
    while (*p != '\0'){
        int res = f(*p);
        if (res == 1){
            count++;
        }
        p++;
    }
    return count;
}
