/*
** EPITECH PROJECT, 2019
** infin_add : math_tools.c
** File description:
** Several math functions
*/

#include "include/number.h"
#include "include/math_tools.h"

int max(int a, int b)
{
    if (a < b)
        return (b);
    return (a);
}

int find_max_abs(number nbr1, number nbr2) //
{
    int index1 = 0;
    int index2 = 0;

    for ( ; index1 < nbr1.length && (nbr1.str)[index1] <= 0; index1++);
    for ( ; index2 < nbr2.length && (nbr2.str)[index2] <= 0; index2++);
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