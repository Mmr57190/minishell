/*
** EPITECH PROJECT, 2021
** + n -
** File description:
** + n -
*/

#include "my_print.h"
#include "my.h"

int my_prt_plus(va_list arguments, int i, char *str)
{
    my_putstr("+");
    i++;
    my_prtd(arguments, i, str);
    return (i);
}

int my_prt_moins(va_list arguments, int i, char *str)
{
    i++;
    my_prtd(arguments, i, str);
    return (i);
}