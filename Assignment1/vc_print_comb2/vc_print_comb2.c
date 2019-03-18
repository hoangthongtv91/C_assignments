/**
 * File       : vc_print_comb2.c
 * Author      : Paulo, Tom
 * Date       : Tue, Feb 5, 2019
 */
#include <stdio.h>
void vc_print_comb2(void)
{
    for (int i = '0'; i <= '9'; i++)
    {
        for (int j = '0'; j <= '9'; j++)
        {
            putchar(i);
            putchar(j);
            putchar(' ');
        }
    }
}