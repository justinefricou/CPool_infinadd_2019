/*
** EPITECH PROJECT, 2019
** infin_add : numbers_tools.c
** File description:
** Functions related to numbers (structure)
*/

#include <stdlib.h>
#include "include/number.h"
#include "include/numbers_tools.h"
#include "include/string_tools.h"

number *create_number(char *str)
{
    number *nbr = NULL;

    nbr = malloc(sizeof(number));
    if (nbr == NULL)
        exit(EXIT_FAILURE);
    nbr->str = str;
    nbr->length = my_strlen(nbr->str);
    return (nbr);
}

void free_number(number *nbr)
{
    free(nbr->str);
    free(nbr);
}