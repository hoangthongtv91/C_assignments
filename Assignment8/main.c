#include <stdio.h>
#include <zconf.h>

#include "vc_boolean.h"
#include "vc_abs.h"

void vc_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

t_bool vc_is_even(int n)
{
    return ((EVEN(n)) ? TRUE : FALSE);
}

//////////////

#include "vc_point.h"

void set_point(t_point *point)
{
    point->x = 86;
    point->y = 89;