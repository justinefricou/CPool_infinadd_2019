/*
** EPITECH PROJECT, 2019
** infin_add : numbers_tools.h
** File description:
** Functions related to numbers (structure)
*/

#ifndef DEF_NUMBERS_TOOLS
#define DEF_NUMBERS_TOOLS

#include "number.h"

number *create_number(char *str, int nbr_length);
void free_number(number *nbr);

#endif // DEF_NUMBERS_TOOLS