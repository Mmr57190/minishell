/*
** EPITECH PROJECT, 2021
** putc
** File description:
** putc
*/

#include "my_print.h"
#include "my.h"

int my_prtc(va_list arguments, int i, char *str)
{
    char c;
    my_putchar(va_arg (arguments, int));
    return (i);
}
