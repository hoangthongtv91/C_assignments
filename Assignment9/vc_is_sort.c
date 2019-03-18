/**
 * File              : vc_is_sort.c
 * Author            : Paulo, Tom
 * Date              : Thur, Feb 14, 2019
 */
#include <stdio.h>
#include <stdbool.h>

int vc_is_lower(int x, int y){
    return (x - y);
}
int vc_is_sort(int *tab, int length, int(*f)(int, int)){
    bool FLAG = false;
    int *p = tab;
    int count = 0;
    while ((count < length) && (FLAG == false)){
        int res = f(*p, *(p+1));
        if (res > 0){
            FLAG = true;
        }else
        {
            FLAG = false;
        }
        
        p++;
        count++;
    }
    if (FLAG == true){
        return 0;
    }
    return 1;
}
