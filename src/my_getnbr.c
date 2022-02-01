#include "my_sh.h"

int my_getnbr(char const *str)
{
    int i = 0;
    long nombre = 0;
    int signe = 1;
    long result = 0;

    for (; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            signe *= -1;
    for (;(str[i] >= '0') && (str[i] <= '9'); i++) {
        nombre = (nombre * 10) + (str[i] - 48);
    }
    result = nombre * signe;
    if (result < 0)
        if (result != -2147483648 || signe == 1)
            return (0);
    if (result > 0)
        if (result > 2147483647 || signe == (-1))
            return (0);
    return (nombre * signe);
}
