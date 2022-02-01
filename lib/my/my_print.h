/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#ifndef MY_PRINT_H
    #define MY_PRINT_H
    #include <stdlib.h>
    #include <stdio.h>
    #include <stddef.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <errno.h>
    #include "my.h"

int my_prtd(va_list arguments, int i, char *str);
int my_prti(va_list arguments, int i, char *str);
int my_prts(va_list arguments, int i, char *str);
int my_prtc(va_list arguments, int i, char *str);
int my_prt_modulo(va_list arguments, int i, char *str);
int my_prt_hashtg(va_list arguments, int i, char *str);
void my_prto(va_list arguments, int i, char *str);
int my_prtx(va_list arguments, int i, char *str);
int my_prt_x2(va_list arguments, int i, char *str);
int my_prtu(va_list arguments, int i, char *str);
int my_prtl(va_list arguments, int i, char *str);
int my_prtb(va_list arguments, int i, char *str);
int my_prt_s2(va_list arguments, int i, char *str);
int my_prt_plus(va_list arguments, int i, char *str);
int my_prt_moins(va_list arguments, int i, char *str);
int my_prt_space(va_list arguments, int i, char *str);
int my_prtp(va_list arguments, char *temp, int i );
int my_prtb(va_list arguments, int i, char *str);
void my_put_unsigned(unsigned int nb);
int gest_format(va_list arguments, int i, char *str);
int gest_hshtg(va_list arguments, int i, char *str);
void my_printf(char *str, ...);

struct choose_flag {
    char print;
    int (*str)(va_list arguments, int i, char *str);
};

static const struct choose_flag PRINT_FNCT[] =
{
    {'+', &my_prt_plus},
    {' ', &my_prt_space},
    {'#', &my_prt_hashtg},
    {'-', &my_prt_moins},
    {'%', &my_prt_modulo},
    {'s', &my_prts},
    {'d', &my_prtd},
    {'c', &my_prtc},
    {'i', &my_prti},
    {'o', &my_prto},
    {'x', &my_prtx},
    {'X', &my_prt_x2},
    {'u', &my_prtu},
    {'b', &my_prtb},
    {'S', &my_prt_s2},
    {'p', &my_prtp},
};

#endif