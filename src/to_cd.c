/*
** EPITECH PROJECT, 2022
** cd
** File description:
** cd
*/

#include "my_sh.h"

char *my_getenv(shll *use, char *name)
{
    int i = 0;
    int len = my_strlen(name);

    for (; use->env[i]; i++)
        if (my_strncmp(name, use->env[i], len) == 0)
            break;
    if (use->env[i] == NULL)
        return (NULL);
    return (&use->env[i][len += 1]);
}

int to_move_path(shll *use)
{
    if (use->ac == 1) {
        if (chdir(my_getenv(use, "HOME")) == -1)
            return (84);
    }
    else if (chdir(use->arg[1]) == -1)
        my_printf("%s: Not a directory.\n", use->arg[1]);
}

void to_create_path(shll *use)
{
    char *tmp = getcwd(use->path, 4000);
    char *result = malloc(sizeof(char) * 150);
    char *test = "PWD=";
    int i = 0;

    for (int x = 0; tmp[x] != '\0'; i++) {
        if (i < 4)
            result[i] = test[i];
        else {
            result[i] = tmp[x];
            x++;
        }
    }
    result[i] = '\0';
    use->path = result;
}

void to_change_env(shll *use)
{
    char **result = my_memset_dchar(500, 500);
    int i = 0;

    to_create_path(use);
    for (; use->env[i] != NULL; i++) {
        if (i == 14)
            result[i] = use->path;
        else
            result[i] = use->env[i];
    }
    result[i] = NULL;
    use->env = result;
}

int to_cd(shll *use)
{
    if (count_space(use->text) > 2) {
        my_printf("cd: Too many arguments.\n");
        return (0);
    }
    to_move_path(use);
    to_change_env(use);
    return (0);
}
