/*
** EPITECH PROJECT, 2019
** infin_add : math_tools.c
** File description:
** Several math functions
*/

#include "include/number.h"
#include "include/math_tools.h"
#include "include/string_tools.h"

int max(int a, int b)
{
    if (a < b)
        return (b);
    return (a);
}

int find_max_abs(number nbr1, number nbr2)
{
    int index1 = 0;
    int index2 = 0;

    skip_useless_char(nbr1, &index1);
    skip_useless_char(nbr2, &index2);
    if (nbr1.length - index1 > nbr2.length - index2)
        return (-1);
    if (nbr1.length - index1 < nbr2.length - index2)
        return (1);
    for ( ; index1 < nbr1.length && index2 < nbr2.length; index1++, index2++) {
        if ((nbr1.str)[index1] > (nbr2.str)[index2])
            return (-1);
        if ((nbr1.str)[index1] < (nbr2.str)[index2])
            return (1);
    }
    return (0);
}

char get_sign(char *nbr)
{
    if (nbr[0] == '-')
        return ('-');
    return ('+');
}

int is_digit(char c)
{
    if (c < '0' || '9' < c)
        return (0);
    return (1);
}

int is_sign(char c)
{
    if (c == '-' || c == '+') {
        return (1);
    }
    return (0);
}