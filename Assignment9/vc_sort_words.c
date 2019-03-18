/**
 * File              : vc_sort_words.c
 * Author            : Paulo, Tom
 * Date              : Thur, Feb 14, 2019
 */
#include <stdio.h>
#include "vc_split_whitespace.h"

void vc_sort_words(char **words)
{
    char **res = words;
    int num= 0;
    while (*res != '\0')
    {
        num++;
        res++;
    }
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 1; i < num; j++)
        {
            if (res[i] > res[j])
            {
                char *temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }
}

int main(){
    char *str = "Hello World\0";
    char **res = vc_split_whitespaces(str);
    vc_sort_words(res);
    while (*res){
        printf("%s\n", *res);
        res++;
    }
}

