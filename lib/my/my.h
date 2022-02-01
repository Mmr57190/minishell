/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stddef.h>
    #include <stdio.h>

void my_putchar(char c);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

int my_str_isupper(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

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

int my_prtb(va_list arguments, int i, char *str);

int my_prt_s2(va_list arguments, int i, char *str);

int my_prt_plus(va_list arguments, int i, char *str);

int my_prt_moins(va_list arguments, int i, char *str);

int my_prt_space(va_list arguments, int i, char *str);

int my_prtp(va_list arguments, char *temp, int i );

int my_prt_b(va_list arguments, int i, char *str);

void my_printf(char *str, ...);

#endif
