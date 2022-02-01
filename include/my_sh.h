/*
** EPITECH PROJECT, 2022
** my_sh
** File description:
** my_sh
*/

#ifndef my_sh
    #define my_sh
    #include <sys/types.h>
    #include <unistd.h>
    #include <sys/wait.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <string.h>
    #include "my.h"

typedef struct {
    int pid;
    int end;
    int real_size_env;
    int size_env;
    int ac;
    char *text;
    char *path;
    char **env;
    char **av;
    char **arg;
} shll;

int main(int ac, char **av, char **env);

int pos_fork(void);

int my_getnbr(char const *str);

int count_spaces(char *av);

char **my_str_to_word_array(char *av);

char **my_memset_dchar(int size1, int size2);

char *my_memset_char(int size);

int to_cd(shll *use);

void to_change_env(shll *use);

void to_create_path(shll *use);

int to_move_path(shll *use);

void to_structure(shll *usee, char **av, char **env);

int error_main(int ac, char **av);

int count_space(char *str);

int envrmnt(shll *use);

void to_exit(shll *use);

void to_text(shll *use);

int to_shell(shll *use);

void basic(shll *use);

void complicate(shll *use);

int to_setenv(shll *use);

int vrf(shll *use, int space);

void unset(shll *use);

int to_unsetenv(shll *use);

void to_pwd(shll *use);

void to_ls(shll *use);

char *to_twice(shll *use);

char *create_compare_simple(shll *use);

void env(shll *use, int save);

void basic_unset(shll *use);

char *delete_space(shll *use);

int my_getnbr(char const *str);

int main_error(int ac, char **av);

void binary_launch(shll *use);

char *my_getenv(shll *use, char *name);

int my_strcmp_exit(char const *s1, char const *s2);

#endif /* !my_sh */
