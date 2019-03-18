/**
 * File       : vc_putnbr.c
 * Author      : Paulo, Tom
 * Date       : Tue, Feb 5, 2019
 */
#include <stdio.h>
void vc_putnbr(int nb)
{
    int fn;
    int sn;
    
    fn = nb / 10;
    fn = fn + 48;
    putchar(fn);
    
    sn = nb % 10;
    sn = sn + 48;
    putchar(sn);
    
}

int main(){
    vc_putnbr(46);
    return 0;
}