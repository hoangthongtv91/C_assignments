#include <stdio.h>
char *vc_strncpy(char *dest, char *src, unsigned int n)
{
    printf("==================\n%1$s\n==================\n", __func__);

    int counter1 = 0;
    while (*dest != '\0')
    {
        dest++;
        counter1++;
    }

    int counter2 = 0;
    while (*src != '\0')
    {
        if (n <= counter2)
        {
            *src = '\0';
        }
        else
        {
            *dest = *src;
            dest++;
            src++;
        }
        counter2++;
    }
    *dest = '\0';

    int counter = counter1 + counter2;

    while (0 < counter - 1)
    {
        counter--;
        dest--;
    }

    return dest;
}