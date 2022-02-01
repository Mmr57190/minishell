/*
** EPITECH PROJECT, 2022
** envrmnt
** File description:
** envrmnt
*/

#include "my_sh.h"

int envrmnt(shll *use)
{
    for (int i = 0; use->env[i] != NULL; i++)
        my_printf("%s\n", use->env[i]);
    return (0);
}
