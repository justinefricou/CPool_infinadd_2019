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

void add_2digits(char *res_dozen, char *res_unit, char *digit1, char *digit2)
{
    res_dozen[0] = res_dozen[0] + (res_unit[0] + digit1[0] + digit2[0]) / 10;
    res_unit[0] = (res_unit[0] + digit1[0] + digit2[0]) % 10;
}

void add_1digit(char *result_dozen, char *result_unit, char *digit)
{
    result_dozen[0] = result_dozen[0] + (result_unit[0] + digit[0]) / 10;
    result_unit[0] = (result_unit[0] + digit[0]) % 10;
}

void decrement_indexes(int *i1, int *i2, int *i_res)
{
    (*i1)--;
    (*i2)--;
    (*i_res)--;
}

char *add_strings(char *nbr1, char *nbr2, int length_nbr1, int length_nbr2)
{
    int i1 = length_nbr1 - 1;
    int i2 = length_nbr2 - 1;
    int length_result = 0;
    int i_res = 0;
    char *res = NULL;

    length_result = max(length_nbr1, length_nbr2) + 2;
    i_res = length_result - 1;
    res = malloc(sizeof(char) * (length_result + 1));
    if (res == NULL)
        return (NULL);
    res[length_result] = '\0';
    while (i1 >= 0 && i2 >= 0) {
        add_2digits(&(res[i_res - 1]), &(res[i_res]), &(nbr1[i1]), &(nbr2[i2]));
        decrement_indexes(&i1, &i2, &i_res);
    }
    while (i2 >= 0) {
        add_1digit(&(res[i_res - 1]), &(res[i_res]), &(nbr2[i2]));
        decrement_indexes(&i1, &i2, &i_res);
    }
    while (i1 >= 0) {
        add_1digit(&(res[i_res - 1]), &(res[i_res]), &(nbr1[i1]));
        decrement_indexes(&i1, &i2, &i_res);
    }
    while (i_res > 0) {
        res[i_res] = 0;
        i_res--;
    }
    digits_to_ascii(res, length_result);
    return (res);
}

/*char *sub_strings(char *nbr1, char *nbr2, int length_nbr1, int length_nbr2)
{
    //!
    return (result);
}*/

char *get_result(char *nbr1, char *nbr2, int length_nbr1, int length_nbr2)
{
    char *result = NULL;

    if (get_sign(nbr1) == '+' && get_sign(nbr2) == '+') {
        result = add_strings(nbr1, nbr2, length_nbr1, length_nbr2);
        result[0] = '+';
    } else if (get_sign(nbr1) == '-' && get_sign(nbr2) == '-') {
        result = add_strings(nbr1, nbr2, length_nbr1, length_nbr2);
        result[0] = '-';
    } /*else {
        result = sub_strings(nbr1, nbr2, length_nbr1, length_nbr2);
        //! mettre le bon signe
    }*/
    return (result);
}

int main(int argc, char **argv)
{
    char *result = NULL;
    int length_nbr1 = 0;
    int length_nbr2 = 0;

    if (detect_input_errors(argc, argv) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    length_nbr1 = my_strlen(argv[1]);
    length_nbr2 = my_strlen(argv[2]);
    ascii_to_digits(argv[1]);
    ascii_to_digits(argv[2]);
    result = get_result(argv[1], argv[2], length_nbr1, length_nbr2);
    if (result == NULL)
        return (EXIT_FAILURE);
    display_result(result);
    free(result);
    return (EXIT_SUCCESS);
}