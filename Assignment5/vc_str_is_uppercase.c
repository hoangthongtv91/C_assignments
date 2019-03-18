int vc_str_is_lowercase(char *str) {
    while (*str != '\0') {
        if (!(*str >= 65 && *str <= 90))
            return 0;
        else
            str++;
    }
    return 1;
}