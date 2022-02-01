/*
** EPITECH PROJECT, 2021
** unsigned
** File description:
** unsigned
*/

#include "my_print.h"
#include "my.h"

void my_put_unsigned(unsigned int nb)
{
    long a = nb;

    if (a == 0)
        my_putchar(0);
    if (a < 0) {
        my_putchar('-');
        a = a * (-1);
    }
    if (a > 9)
        my_put_unsigned(a / 10);
    my_putchar(a % 10 + '0');
}

int my_prtb(va_list arguments, int i, char *str)
{
    unsigned long tmp = 0;
    i = 1;
    long res = 0;

    tmp = va_arg(arguments, unsigned long);
    while (tmp > 0) {
        res += (tmp % 2) * i;
        tmp /= 2;
        i *= 10;
    }
    my_put_nbr(res);
    return (i);
}

int my_prtu(va_list arguments, int i, char *str)
{
    unsigned int nb = va_arg(arguments, unsigned int);
    my_put_unsigned(nb);
    return (i);
}
