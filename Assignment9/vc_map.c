/**
 * File              : vc_map.c
 * Author            : Paulo, Tom
 * Date              : Thur, Feb 14, 2019
 */
#include <stdio.h>
#include <stdlib.h>

int vc_add(int x){
    return (x + 10);
}

int *vc_map(int *tab, int length, int(*f)(int)){
    int *p = tab;
    int *res = (int*) malloc(sizeof(int) * length);
    int count = 0;
    while (count < length){
        *res = f(*p);
        p++;
        count++;
        res++;
    }
    res -= length;
    return res;
    
}
