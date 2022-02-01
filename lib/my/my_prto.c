/*
** EPITECH PROJECT, 2021
** octal
** File description:
** octal
*/

#include "my_print.h"
#include "my.h"

void my_prto(va_list arguments, int i, char *str)
{
    unsigned long tmp = 0;
    i = 1;
    long res = 0;

    tmp = va_arg(arguments, unsigned long);
    while (tmp > 0) {
        res += (tmp % 8) * i;
        tmp /= 8;
        i *= 10;
    }
    my_put_nbr(res);
}
