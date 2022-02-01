/*
** EPITECH PROJECT, 2022
** count space
** File description:
** sous fonction
*/

#include "my_sh.h"

int count_space(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            count++;
    count++;
    return (count);
}

char *delete_space(shll *shell)
{
    char *result = malloc(sizeof(char) * my_strlen(shell->text));
    int x = 0;

    for (int i = 0; shell->text[i] != '\0'; i++)
        if (shell->text[i] != '\n') {
            result[x] = shell->text[i];
            x++;
        }
    return (result);
}
