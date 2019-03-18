#include <stdio.h>

int vc_str_is_alpha(char *str) {

    while (*str != '\0') {
        if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
            return 0;
        else
            str++;
    }
    return 1;
}

