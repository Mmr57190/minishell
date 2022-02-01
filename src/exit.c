/*
** EPITECH PROJECT, 2022
** exit
** File description:
** exit
*/

#include "my_sh.h"

void to_exit(shll *use)
{
    int tmp = 0;
    int space = count_space(use->text);

    if (space == 1)
        use->end = 1;
    else if (space != 2)
        my_printf("exit: Expression Syntax.\n");
    else
        to_exit(use);
}
