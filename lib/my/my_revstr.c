/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** revstr
*/

#include "my.h"

int my_strpen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

char *my_revstr(char *str)
{
    int i = 0;
    int n = my_strpen(str) - 1;
    char temp;

    while (i <= n) {
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        i++;
        n--;
    }
    return (str);
}
