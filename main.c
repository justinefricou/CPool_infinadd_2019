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

int main(int argc, char **argv)
{
    number result = NULL;
    int length_nbr1 = 0;
    int length_nbr2 = 0;

    if (detect_input_errors(argc, argv) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    length_nbr1 = my_strlen(argv[1]);
    length_nbr2 = my_strlen(argv[2]);
    ascii_to_digits(argv[1]);
    ascii_to_digits(argv[2]);
    result = get_result(argv[1], argv[2], length_nbr1, length_nbr2); //
    if (result == NULL || result.str == NULL)
        return (EXIT_FAILURE);
    display_result(result);
    free(result.str);
    free(result);
    return (EXIT_SUCCESS);
}