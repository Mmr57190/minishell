/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int res = 0;

    for (;s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
    }
    return (res);
}
