/*
** EPITECH PROJECT, 2019
** infin_add : string_addition.c
** File description:
** Functions used to add the strings and return the result
*/

#include <stdlib.h>
#include "include/math_tools.h"
#include "include/string_addition.h"
#include "include/numbers_tools.h"
#include "include/string_tools.h"
#include "include/string_addition_abs_values.h"
#include "include/number.h"

void put_sign(number nbr1, number nbr2, number *result)
{
    if (get_sign(nbr1.str) == get_sign(nbr2.str))
        result->str[0] = get_sign(nbr1.str);
    else {
        switch(find_max_abs(nbr1, nbr2)) {
        case -1 :
            result->str[0] = get_sign(nbr1.str);
            break;
        case 0 :
            result->str[0] = '+';
            break;
        case 1 :
            result->str[0] = get_sign(nbr2.str);
            break;
        }
    }
}
// à tester
void add_numbers(number nbr1, number nbr2, number *result)
{
    if (get_sign(nbr1.str) == get_sign(nbr2.str))
        add_absolute_values(nbr1, nbr2, result);
    else {
        switch(find_max_abs(nbr1, nbr2)) {
        case -1 :
            substract_absolute_values(nbr1, nbr2, result);
            break;
        case 0 :
            break;
        case 1 :
            substract_absolute_values(nbr2, nbr1, result);
            break;
        }
    }
}

number *get_result(number nbr1, number nbr2) // à tester
{
    number *result_n = NULL;
    char *result_s = NULL;
    int nbr_length = 0;

    nbr_length = max(nbr1.length, nbr2.length) + 2;
    result_s = malloc(sizeof(char) * (nbr_length + 1));
    if (result_s == NULL)
        exit(EXIT_FAILURE);
    result_n = create_number(result_s, nbr_length);
    for (int i = 0; i <= nbr_length; i++) {
        result_n->str[i] = 0;
    }
    put_sign(nbr1, nbr2, result_n);
    add_numbers(nbr1, nbr2, result_n);
    return (result_n);
}