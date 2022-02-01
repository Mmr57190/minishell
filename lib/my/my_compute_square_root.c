/*
** EPITECH PROJECT, 2021
** compute_square_root
** File description:
** compute_square_root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int res = 1;
    int vrf;

    if (nb > 2147483647 || nb < -2147483648)
        return (0);
    if (nb == 0)
        return (0);
    if (nb == 1)
        return (1);
    for (vrf; vrf != nb; res++)
        vrf = res * res;
    return (res);
}
