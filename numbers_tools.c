/*
** EPITECH PROJECT, 2019
** infin_add : numbers_tools.c
** File description:
** Functions related to numbers (structure)
*/

#include <stdlib.h>
#include "include/number.h"
#include "include/numbers_tools.h"

number *create_number(char *str, int nbr_length)
{
    number *nbr = NULL;

    nbr = malloc(sizeof(number));
    if (nbr == NULL)
        exit(EXIT_FAILURE);
    nbr->str = str;
    nbr->length = nbr_length;
    return (nbr);
}

void free_number(number *nbr)
{
    free(nbr->str);
    free(nbr);
}