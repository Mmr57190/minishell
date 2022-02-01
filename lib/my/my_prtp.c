/*
** EPITECH PROJECT, 2021
** pointer
** File description:
** pointer
*/


#include "my_print.h"
#include "my.h"

unsigned long other_get_nbr(char *str)
{
    unsigned long res = 0;

    for (int i = 0; str[i] != '\0'; i++)
        res = res * 10 + (str[i] - '0');
    return (res);
}

unsigned long length(unsigned long nb)
{
    int div = 0;

    for (div; nb > 0; div++)
        nb = nb / 10;
    return (div);
}

char *my_d_to_h_min(char *str, int mdl, char lttrs, unsigned long nb)
{
    int i = 0;
    char *tmp = malloc(sizeof(char) * (length(nb) + 1));

    for (i; nb > 16; i++, mdl = 10, lttrs = 'a', nb = nb / 16) {
        if (nb % 16 > 9) {
            for (nb; nb % 16 != mdl; mdl++, lttrs++);
            tmp[i] = lttrs;
        } else
            tmp[i] = ((nb % 16) + '0');
    }
    if (nb < 16 && nb > 9) {
        for (nb; nb != mdl; mdl++, lttrs++);
        tmp[i] = lttrs;
    }
    if (nb < 16 && nb < 9) {
        tmp[i] = (nb + '0');
        i++;
    }
    return (my_revstr(tmp));
}

char *str_list(unsigned long nb)
{
    char *tmp = malloc(sizeof(char) * (length(nb) + 1));
    int i = 0;

    for (i; nb > 0; i++) {
        tmp[i] = ((nb % 10) + '0');
        nb = nb / 10;
    }
    tmp[i] = '\0';
    tmp = my_revstr(tmp);
    return (tmp);
}

int my_prtp(va_list arguments, char *temp, int i)
{
    void *ptr = va_arg(arguments, void *);
    char *str = str_list((unsigned long)ptr);
    char *res;

    res = my_d_to_h_min(str, 10, 'a', other_get_nbr(str));
    my_putstr("0x");
    my_putstr(res);
}
