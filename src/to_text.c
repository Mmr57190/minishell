/*
** EPITECH PROJECT, 2022
** text
** File description:
** text
*/

#include "my_sh.h"

void to_text(shll *use)
{
    size_t buffsize = 32;
    use->text = malloc(sizeof(char) * buffsize);

    if (isatty(0) != 0)
        my_printf("$> ");
    if (getline(&use->text, &buffsize, stdin) == -1)
        exit(0);
    if (use->text[0] == '\n')
        to_text(use);
    use->arg = my_str_to_word_array(use->text);
}
