/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int lgr = my_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++, lgr++)
        dest[lgr] = src[i];
    dest[lgr] = '\0';
    return (dest);
}
