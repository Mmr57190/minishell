/*
** EPITECH PROJECT, 2021
** % n #
** File description:
** % n #
*/

#include "my_print.h"
#include "my.h"

int my_prt_modulo(va_list arguments, int i, char *str)
{
    my_putstr("%");
    i++;
    my_printf("%c", str[i]);
    return (0);
}

int gest_hshtg(va_list arguments, int i, char *str)
{
    va_list fnctn;
    va_copy(fnctn, arguments);
    int nb = va_arg(fnctn, int);

    if (str[i + 1] == 'x') {
        my_putstr("0x");
        i++;
        my_prtx(arguments, i, str);
    }
    if (str[i + 1] == 'X') {
        my_putstr("0X");
        i++;
        my_prt_x2(arguments, i, str);
    }
}

int my_prt_hashtg(va_list arguments, int i, char *str)
{
    va_list fnctn;
    va_copy(fnctn, arguments);
    int nb = va_arg(fnctn, int);

    if (str[i + 1] == 'o') {
        my_putstr("0");
        i++;
        my_prto(arguments, i, str);
    }
    gest_hshtg(arguments, i, str);
    if (str[i + 1] == 'b') {
        my_putstr("0b");
        i++;
        my_prtb(arguments, i, str);
    }
    return (i);
}
