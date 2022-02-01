/*
** EPITECH PROJECT, 2021
** swap
** File description:
** swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
