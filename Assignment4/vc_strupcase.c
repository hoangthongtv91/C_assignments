#include <stdio.h>
char *vc_strupcase(char *str)
{
    int counter = 0;
    while (*str != '\0')
    {
        if (97 <= *str && *str <= 122)
        {
            *str = *str - 32;
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