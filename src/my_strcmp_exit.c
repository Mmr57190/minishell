/*
** EPITECH PROJECT, 2022
** cmp_exit
** File description:
** cmp_exit
*/

#include "my_sh.h"

int my_strcmp_exit(char const *s1, char const *s2)
{
    int i = 0;
    int res = 0;
    int biggest = my_strlen(s1);

    if (biggest < my_strlen(s2))
        biggest = my_strlen(s2);
    for (; i < biggest; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
    }
    return (res);
}