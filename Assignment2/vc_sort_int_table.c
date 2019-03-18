/**
 * File       : vc_sort_int_table.c
 * Author      : Paulo, Tom
 * Date       : Wed, Feb 6, 2019
 */
#include <stdio.h>
void vc_sort_int_table(int *tab, int size){
    for (int i = 0; i < (size - 1); i++){
        for (int j = 1 ; j < size; j++){
            if (tab[i] > tab[j]){
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

