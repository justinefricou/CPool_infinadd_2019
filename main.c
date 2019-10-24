/*
** EPITECH PROJECT, 2019
** infin_add : main.c
** File description:
** A program that performs an infinite addition.
*/

#include <stdlib.h>
#include "include/error_detection.h"
#include "include/math_tools.h"
#include "include/string_tools.h"
#include "include/display.h"
#include "include/string_addition.h"
#include "include/number.h"

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

int main(int argc, char **argv)
{
    number *result;
    number nbr1 = {argv[1], my_strlen(argv[1])};
    number nbr2 = {argv[2], my_strlen(argv[2])};

    if (detect_input_errors(argc, argv) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    result = get_result(nbr1, nbr2);
    display_result(*result);
    free_number(result);
    return (EXIT_SUCCESS);
}