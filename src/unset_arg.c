/*
** EPITECH PROJECT, 2022
** unset_arg
** File description:
** unset_arg
*/

#include "my_sh.h"

char *create_compare_simple(shll *use)
{
    char *result = malloc(sizeof(char) * my_strlen(use->arg[1] + 2));
    int i = 0;

    for (; use->arg[1][i] != '\0'; i++)
        result[i] = use->arg[1][i];
    result[i] = '=';
    result[i + 1] = '\0';
    return (result);
}

void env(shll *use, int save)
{
    char **result = my_memset_dchar(500, 500);
    int x = 0;

    for (int i = 0; use->env[i] != NULL; i++)
        if (i != save) {
            result[x] = use->env[i];
            x++;
        }
    result[x] = NULL;
    use->env = result;
}

void basic_unset(shll *use)
{
    int i = use->real_size_env;
    char *tocompare = create_compare_simple(use);
    int save = 0;

    for (; use->env[i] != NULL; i++)
        if (my_strcmp(use->env[i], tocompare) == 0)
            save = i;
    if (save != 0)
        env(use, save);
}
