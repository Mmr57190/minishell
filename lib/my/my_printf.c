/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include "my_print.h"
#include "my.h"

void my_printf(char *str, ...)
{
    va_list arguments;
    va_start(arguments, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            for (int j = 0; j < 16; j++) {
                if (str[i] == PRINT_FNCT[j].print) {
                    PRINT_FNCT[j].str(arguments, i, str);
                }
            }
            i = gest_format(arguments, i, str);
        } else
            my_putchar(str[i]);
    }
    va_end(arguments);
}
