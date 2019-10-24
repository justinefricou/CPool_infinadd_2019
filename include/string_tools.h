/*
** EPITECH PROJECT, 2019
** infin_add : string_tools.h
** File description:
** Several functions using strings for infin_add project
*/

#ifndef DEF_STRING_TOOLS
#define DEF_STRING_TOOLS

#include "number.h"

int is_digit(char c);
int is_sign(char c);
int my_strlen(char *str);
void ascii_to_digits(char *str);
void digits_to_ascii(number *nbr);

#endif // DEF_STRING_TOOLS