#include <stdio.h>

char *vc_strlowcase(char *str)
{
    int counter = 0;
    while (*str != '\0')
    {
        if (65 <= *str && *str <= 90)
        {
            *str = *str + 32;
        }
        str++;
        counter++;
    }

    while (0 < counter)
    {
        counter--;
        str--;
    }

    return str;
}