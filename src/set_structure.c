/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#include "my_sh.h"

void to_structure(shll *use, char **av, char **env)
{
    int i = 0;

    use->path = NULL;
    use->path = getcwd(use->path, 4000);
    use->text = "test\n";
    use->av = av;
    use->env = env;
    use->end = 0;
    for (; env[i] != NULL ;i++);
    use->real_size_env = i;
    use->size_env = i;
}
