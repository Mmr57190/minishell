/*
** EPITECH PROJECT, 2021
** s n s2
** File description:
** s n s2
*/

#include "my_print.h"
#include "my.h"

int my_prts(va_list arguments, int i, char *str)
{
    char *ptr = va_arg(arguments, char *);

    my_putstr(ptr);
    return (i);
}

int other_fnct(int j)
{
    int res = 0;
    int a = 1;

    while (j > 0) {
        res += (j % 8) * a;
        j /= 8;
        a *= 10;
    }
    my_put_nbr(res);
    return (0);
}

int my_prt_s2(va_list arguments, int i, char *str)
{
    char *tmp;
    int j = 0;
    int res = 0;
    int a = 1;

    tmp = va_arg(arguments, char *);
        for (int i = 0; tmp[i] != '\0'; i++) {
            if (tmp[i] < 37 || tmp[i] > 127) {
                my_putchar('\\');
                j = tmp[i];
                other_fnct(j);
        } else
                my_putchar(tmp[i]);
    }
    return (i);
}
