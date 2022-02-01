/*
** EPITECH PROJECT, 2022
** to_ls
** File description:
** to_ls
*/

#include "my_sh.h"

void to_ls(shll *use)
{
    use->pid = fork();
    char *tmp = NULL;

    if (use->pid == -1)
        to_exit((shll *)84);
    if (use->pid == 0)
        execve("/bin/ls", use->arg, use->env);
    else
        waitpid(-1, NULL, 0);
}
