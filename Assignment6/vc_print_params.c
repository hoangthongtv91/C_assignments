/**
 * File              : vc_print_params.c
 * Author            : Ayana, Tom
 * Date              : Sun, Feb 10, 2019
 */
#include <stdio.h>

int main(int argc, char *argv[])    
{
    for (int i = 1;i < argc;i++)
    {
        printf("%s ", argv[i]);  
        printf("\n");      
    }
    printf("\n");
    return 0;
}