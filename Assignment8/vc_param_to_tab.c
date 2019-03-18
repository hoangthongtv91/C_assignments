/**
 * File              : vc_abs.h
 * Author            : Mihail Urmanschi, Tom
 * Date              : Wed, Feb 13, 2019
 */
#include <printf.h>
#include "vc_stock.h"

/**
 * File              : vc_param_to_tab.c
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-13 14:15
 */



int main(int argc, char **argv)
{

    struct s_stock *my_args = vc_param_to_tab(argc, argv);
    printf("============\n");

    vc_show_tab(my_args);

}