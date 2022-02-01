/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "my_sh.h"

int main(int ac, char **av, char **env)
{
    shll *use = malloc(sizeof(shll));
    char *test = malloc(sizeof(char) * 4096);

    if (ac != 1 && main_error(ac, av) == 84) {
        free(test);
        free(use);
        return (84);
    }
    to_structure(use, av, env);
        while (use->end == 0)
            to_shell(use);
    free(test);
    free(use);

    return (0);
}
