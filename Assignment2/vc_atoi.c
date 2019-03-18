#include <stdio.h>
#include <stdlib.h>

int vc_atoi(char *str){
    int size =0;
    while (str[i] != '\0'){
        size++;
    }
    char s[100];
    for (int i = 0; i <= size; i++ ){
        if ((str[i] == '0') || (str[i] == '1') || (str[i] == '2') || (str[i] == '3') || (str[i] == '4') || (str[i] == '5') || (str[i] == '6')
        || (str[i] == '7') || (str[i] == '8') || (str[i] == '9')){
            s[i] = str[i];
    }   
    s[i+1] = '\0';
    
        
    }
}