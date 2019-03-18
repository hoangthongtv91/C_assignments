/**
 * File              : vc_print_combn.c
 * Author            : Paulo, Tom
 * Date              : Tue, Feb 5, 2019
 */
#include <stdio.h>
void vc_print_combn(int n){
    int sum = 1;
    for (int i = 1; i <= n; i++){
        sum = sum * 10;        
    }
    for (int i = 1; i < sum; i++){
        printf("%d ",i);
    }
}

