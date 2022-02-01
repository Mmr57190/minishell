/*
** EPITECH PROJECT, 2021
** i and d
** File description:
** i and d
*/

#include "my_print.h"
#include "my.h"

int my_prtd(va_list arguments, int i, char *str)
{
    int nb = va_arg(arguments, int);
    my_put_nbr(nb);
    return (i);
}

int my_prti(va_list arguments, int i, char *str)
{
    int nb = va_arg(arguments, int);
    my_put_nbr(nb);
    return (i);
}
