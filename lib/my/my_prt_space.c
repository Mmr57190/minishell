/*
** EPITECH PROJECT, 2021
** space
** File description:
** space
*/

#include "my_print.h"
#include "my.h"

int my_prt_space(va_list arguments, int i, char *str)
{
    va_list fnctn;
    va_copy(fnctn, arguments);
    int nb = va_arg(fnctn, int);

    if (str[i + 1] == 'i' || str[i + 1] == 'd')
    if (nb > 0)
    my_putchar(' ');
    i++;
    my_prtd(arguments, i, str);
    return (i);
}
