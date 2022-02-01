/*
** EPITECH PROJECT, 2021
** gest_format
** File description:
** gest_format
*/

#include "my_print.h"
#include "my.h"

int gest_format(va_list arguments, int i, char *str)
{
    if (str[i] == '#')
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == ' ')
        i++;
    if (str[i] == '%')
        i++;
    if (str[i] == '-')
        i++;
    return (i);
}
