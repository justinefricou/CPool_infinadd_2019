/*
** EPITECH PROJECT, 2019
** infin_add : string_tools.c
** File description:
** Several functions using strings for infin_add project
*/

#include "string_tools.h"
#include "math_tools.h"
#include "number.h"

int my_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}

void skip_useless_char(number nbr, int *index)
{
    for ( ; *index < nbr.length && is_sign((nbr.str)[*index]); (*index)++);
    for ( ; *index < nbr.length && (nbr.str)[*index] == 0; (*index)++);
}

void ascii_to_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9')
            str[i] = str[i] - 48;
    }
}

void digits_to_ascii(number *nbr)
{
    for (int i = 0; i < nbr->length; i++) {
        if (0 <= (nbr->str)[i] && (nbr->str)[i] <= 9)
            (nbr->str)[i] = (nbr->str)[i] + 48;
    }
    (nbr->str)[nbr->length] = '\0';
}