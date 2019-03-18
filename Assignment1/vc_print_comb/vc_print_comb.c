/**
 * File       : vc_print_comb.c
 * Author      : Paulo, Tom
 * Date       : Tue, Feb 5, 2019
 */
#include <stdio.h>
void vc_vc_print_comb(void)
{
    for (int i = '0'; i <= '9'; i++)
    {
        for (int j = '0'; j <= '9'; j++)
        {
            for (int k = '0'; k <= '9'; k++)
            {
                if ((i != j) && (i != k) && (j != k))
                {
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    putchar(' '); 
                }
            }
        }
    }
}

