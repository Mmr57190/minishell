/*
** EPITECH PROJECT, 2022
** setenv
** File description:
** setenv
*/

#include "my_sh.h"

void basic(shll *use)
{
    int i = 0;
    char **temp = malloc(sizeof(char *) * use->size_env + 2);

    use->size_env++;
    for (i = 0; i < use->size_env; i++)
        temp[i] = malloc(sizeof(char) * 1000);
    for (i = 0; use->env[i] != NULL; i++)
        temp[i] = use->env[i];
    temp[i] = my_strcat(use->arg[1], "=");
    temp[i + 1] = NULL;
    use->env = temp;
}

void complicate(shll *use)
{
    int i = 0;
    char **temp = malloc(sizeof(char *) * use->size_env + 1);
    char *tst = NULL;

    use->size_env++;
    for (i = 0; use->env[i] != NULL; i++)
        temp[i] = malloc(sizeof(char) * my_strlen(use->env[i]) + 1);
    for (i = 0; use->env[i] != NULL; i++)
        temp[i] = use->env[i];
    tst = to_twice(use);
    temp[i] = tst;
    temp[i + 1] = NULL;
    use->env = temp;
}

int to_setenv(shll *use)
{
    int space = count_space(use->text);

    if (space >= 4) {
        my_printf("setenv: Too many arguments.\n");
        return (0);
    }
    if (space == 1) {
        delete_space(use);
    } else if (space == 2) {
        basic(use);
    } else
        complicate(use);
    return (0);
}
