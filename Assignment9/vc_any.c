/**
 * File              : vc_any.c
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
int vc_any(char **tab, int(*f)(char*)){
    bool FLAG = false;
    char *p = tab;
    while ((*p != '\0') && (FLAG == false)){
        int res = f(*p);
        if (res == 1){
            FLAG = true;
        }else
        {
            FLAG = false;
        }
        
        p++;
    }
    if (FLAG == true){
        return 1;
    }
    return 0;
}
