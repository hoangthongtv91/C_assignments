/**
 * File              : vc_print_reverse_alphabet.c
 * Author            : Paulo, Tom
 * Date              : Tue, Feb 5, 2019
 */
#include <stdio.h>



void vc_print_reverse_alphabet(void){
    char c;
    for(c = 'z'; c >= 'a'; c--){
        putchar(c); 
     }
}

int main(){
    vc_print_reverse_alphabet();
    printf("\n");
    return 0;
}

