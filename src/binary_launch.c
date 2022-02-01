/*
** EPITECH PROJECT, 2022
** B-PSU-101-NCY-1-1-minishell1-flavien.maameri
** File description:
** binary_launch
*/

#include "my_sh.h"

void binary_launch(shll *use)
{
    if (access(use->arg[0], X_OK) == -1)
        my_printf("%s%s\n", use->arg[0], ": Command not found.");
    use->pid = fork();

    if (use->pid == -1)
        to_exit((shll *)84);
    if (use->pid == 0)
        execve(use->arg[0], use->arg, use->env);
    else
        waitpid(-1, NULL, 0);
}