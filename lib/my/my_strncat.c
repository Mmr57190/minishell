/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int lgr = my_strlen(dest);

    for (int i = 0; src[i] != '\0' && i < nb; i++, lgr++)
        dest[lgr] = src[i];
    dest[lgr] = '\0';
    return (dest);
}
