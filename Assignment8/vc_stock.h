/**
 * File              : vc_abs.h
 * Author            : Mihail Urmanschi, Tom
 * Date              : Wed, Feb 13, 2019
 */
#ifndef UNTITLED_VC_STOCK_H
#define UNTITLED_VC_STOCK_H

#include <stdlib.h>

struct s_stock *vc_param_to_tab(int ac, char **av);


char **vc_split_whitespaces(char *str)
{
    char *p1 = str;
    unsigned int total = 0;
    for (; *p1; p1++) total++;
    total++;
    char **result = (char **) malloc(sizeof(char) * total);

    char *p3 = str;
    int index = 0;
    int length = 0;
    char string[8];
    for (; *(p3 - 1); p3++)
    {
        if (*p3 == ' ' || *p3 == '\t' || *p3 == '\n' || *p3 == '\0')
        {
            result[index] = (char *) malloc(sizeof(char) * length);

            string[length] = '\0';

            char *p4 = string;
            char *p5 = result[index];
            for (; *p4; p4++, p5++)
            {
                *p5 = *p4;
            }
            *p5 = '\0';

            index++;
            length = 0;

        } else
        {
            string[length] = *p3;
        }

        length++;
    }
    index++;
    result[index] = (char *) malloc(sizeof(char) * 1);
    result[index][0] = '\0';

    return result;
}

static int get_string_size(const char *src)
{
    int size = 0;
    while (src[size] != '\0')
    {
        size++;
    }
    return size;
}

char *vc_strdup(char *src)
{
    int src_size = get_string_size(src);
    char *string = (char *) malloc(src_size * sizeof(char));
    int index = 0;
    while (index <= src_size)
    {
        string[index] = src[index];
        index++;
    }
    return string;
}

typedef struct s_stock
{
    int size_param;
    char *str;
    char *copy;
    char **words;
} s_stock;

struct s_stock *vc_param_to_tab(int ac, char **av)
{
    struct s_stock *result = malloc(sizeof(struct s_stock));
    result->size_param = ac;
    result->str = *av;
    result->copy = vc_strdup(*av);
    result->words = vc_split_whitespaces(*av);
    return result;
}

void print_line(char *str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        putchar(str[index]);
        index++;
    }
}

void static print_int(int n)
{
    if (n < 10)
        putchar('0' + n);
    if (n > 9)
    {
        int f, s;
        f = n / 10;
        s = n % 10;
        print_int(f);
        print_int(s);
    }
}


void vc_show_tab(struct s_stock *stock)
{
    char *argument = "the argument : \0";
    char *size = "the size : \0";
    char *word = "word : \0";

    print_line(argument);
    print_line(stock->str);
    print_line("\n\0");

    print_line(size);
    print_int(stock->size_param);
    print_line("\n\0");

    char *words = *stock->words;
    for (int i = 0; i <= stock->size_param; ++i)
    {
        print_line(word);
        print_line(&words[i]);
        print_line("\n\0");
    }

}


#endif //UNTITLED_VC_STOCK_H