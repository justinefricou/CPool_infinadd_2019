/*
** EPITECH PROJECT, 2019
** infin_add : string_tools.c
** File description:
** Several functions using strings for infin_add project
*/

#include "include/string_tools.h"
#include "include/number.h"

int my_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
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