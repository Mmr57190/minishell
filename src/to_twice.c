/*
** EPITECH PROJECT, 2022
** to_twice
** File description:
** to_twice
*/

#include "my_sh.h"

char *to_twice(shll *use)
{
    int size = my_strlen(use->arg[1]) + my_strlen(use->arg[2]);
    char *tst = malloc(sizeof(char) * size + 1);
    int x = 0;

    for (int i = 0; use->arg[1][i] != '\0'; i++, x++)
        tst[x] = use->arg[1][i];
    tst[x] = '=';
    x++;
    for (int i = 0; use->arg[2][i] != '\0'; i++, x++)
        tst[x] = use->arg[2][i];
    return (tst);
}
