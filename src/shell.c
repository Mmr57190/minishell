/*
** EPITECH PROJECT, 2022
** shell
** File description:
** shell
*/

#include "my_sh.h"

int to_shell(shll *use)
{
    int i = 0;
        to_text(use);
        if (my_strcmp(use->arg[0], "ls") == 0)
            to_ls(use);
        else if (my_strcmp(use->arg[0], "pwd") == 0)
            to_pwd(use);
        else if (my_strcmp(use->arg[0], "cd") == 0)
            to_cd(use);
        else if (my_strcmp(use->arg[0], "env") == 0)
            envrmnt(use);
        else if (my_strcmp(use->arg[0], "setenv") == 0)
            to_setenv(use);
        else if (my_strcmp_exit(use->arg[0], "exit") == 0)
            to_exit(use);
        else if (my_strcmp(use->arg[0], "unsetenv") == 0)
            to_unsetenv(use);
        else if (my_strcmp(use->arg[0], "./") == 0)
            binary_launch(use);
        else
            my_printf("%s: Command not found.\n", use->arg[0]);
        return (0);
}
