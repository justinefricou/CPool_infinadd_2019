/*
** EPITECH PROJECT, 2019
** infin_add : math_tools.c
** File description:
** Several math functions
*/

#include "include/math_tools.h"

int max(int a, int b)
{
    if (a < b)
        return (b);
    return (a);
}

char get_sign(char *nbr)
{
    if(nbr[0] == '-')
        return ('-');
    return ('+');
}