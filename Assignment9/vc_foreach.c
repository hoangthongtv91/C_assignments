/**
 * File              : vc_foreach.c
 * Author            : Paulo, Tom
 * Date              : Thur, Feb 14, 2019
 */
#include <stdio.h>

void vc_putnbr(int x){
    printf("%d\n", (x + 10));
}
void vc_foreach(int *tab, int length, void(*f)(int)){
    int *p = tab;
    int i = 0;
    while (i < length){
        f(*p);
        p++;
        i++;
    }
}
