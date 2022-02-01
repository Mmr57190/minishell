/*
** EPITECH PROJECT, 2022
** pwd
** File description:
** pwd
*/

#include "my_sh.h"

void to_pwd(shll *use)
{
    use->pid = fork();
    char *tmp = NULL;

    if (use->pid == -1)
        to_exit((shll *)84);
    if (use->pid == 0)
        execve("/bin/pwd", use->arg, use->env);
    else
        waitpid(-1, NULL, 0);
}
