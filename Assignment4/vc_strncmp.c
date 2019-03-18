#include <stdio.h>
int vc_strncmp(char *s1, char *s2, unsigned int n)
{
    printf("==================\n%1$s\n==================\n", __func__);
    const int same = 0;
    while ((*s1 != '\0' || *s2 != '\0') && 0 < n)
    {
        if (*s1 > *s2)
        {
            return 1;
        }
        else if (*s1 < *s2)
        {
            return -1;
        }

        if (*s1 == '\0')
            return -1;
        if (*s2 == '\0')
            return 1;

        n--;

        s1++;
        s2++;
    }

    return same;
}