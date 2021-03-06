/*
** EPITECH PROJECT, 2019
** infin_add : main.c
** File description:
** A program that performs an infinite addition.
*/

#include <stdlib.h>
#include "error_detection.h"
#include "math_tools.h"
#include "string_tools.h"
#include "display.h"
#include "string_addition.h"
#include "numbers_tools.h"
#include "number.h"

int main(int argc, char **argv)
{
    number *result;
    number nbr1 = {argv[1], my_strlen(argv[1])};
    number nbr2 = {argv[2], my_strlen(argv[2])};

    if (detect_input_errors(argc, argv) == EXIT_FAILURE)
        exit(EXIT_FAILURE);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    result = get_result(nbr1, nbr2);
    digits_to_ascii(result);
    display_result(*result);
    free_number(result);
    return (EXIT_SUCCESS);
}