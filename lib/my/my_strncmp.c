/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;
    int res = 0;

    for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
    }
    return (res);
}
