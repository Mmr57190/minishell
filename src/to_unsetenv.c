/*
** EPITECH PROJECT, 2022
** unset
** File description:
** unset
*/

#include "my_sh.h"

int vrf(shll *use, int space)
{
    if (use->real_size_env == use->size_env)
        return (1);
    if (space >= 4 || space == 1)
        return (1);
    return (0);
}

void unset(shll *use)
{
    int i = use->real_size_env;
    char *tocompare = to_twice(use);
    int save = 0;

    for (; use->env[i] != NULL; i++)
        if (my_strcmp(use->env[i], tocompare) == 0)
            save = i;
    if (save != 0)
        env(use, save);
}

int to_unsetenv(shll *use)
{
    int space = count_space(use->text);

    if (vrf(use, space) == 1)
        return (0);
    else if (space == 2)
        basic_unset(use);
    else
        unset(use);
}
