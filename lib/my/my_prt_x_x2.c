/*
** EPITECH PROJECT, 2021
** x n x2
** File description:
** x n x2
*/

#include "my_print.h"
#include "my.h"

int my_prtx(va_list arguments, int i, char *str)
{
    unsigned long tmp = 0;
    char *res = 0;
    int x = 0;
    tmp = va_arg(arguments, unsigned long);
    res = malloc(sizeof(char) * tmp + 1);

    while (tmp > 0) {
        if (tmp % 16 >= 10) {
            res[x] = ((tmp % 16) % 10) + 'a';
        } else
        res[x] = (tmp % 16) + '0';
        tmp = tmp / 16;
        x++;
    }
    res[x] = '\0';
    my_revstr(res);
    my_putstr(res);
    return (i);
}

int my_prt_x2(va_list arguments, int i, char *str)
{
    unsigned long tmp = 0;
    i = 1;
    char *res = 0;
    int x = 0;
    tmp = va_arg(arguments, unsigned long);
    res = malloc(sizeof(char) * tmp + 1);

    while (tmp > 0) {
        if (tmp % 16 >= 10) {
            res[x] = ((tmp % 16) % 10) + 'A';
        } else
        res[x] = (tmp % 16) + '0';
        tmp = tmp / 16;
        x++;
    }
    res[x] = '\0';
    my_revstr(res);
    my_putstr(res);
    return (i);
}
