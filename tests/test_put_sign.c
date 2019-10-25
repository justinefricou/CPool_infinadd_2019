/*
** EPITECH PROJECT, 2019
** infin_add : test_put_sign.c
** File description:
** Tests for function put_sign
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "../include/string_addition.h"
#include "../include/numbers_tools.h"
#include "../include/string_tools.h"
#include "../include/number.h"

Test(put_sign, both_positive_case)
{
    number nbr1 = {strdup("+1"), 2};
    number nbr2 = {strdup("16845"), 5};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(8 * sizeof(char));
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    put_sign(nbr1, nbr2, result_n);
    cr_expect_eq((result_n->str)[0], '+');
}

Test(put_sign, both_negative_case)
{
    number nbr1 = {strdup("-1"), 2};
    number nbr2 = {strdup("-16845"), 6};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(8 * sizeof(char));
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    put_sign(nbr1, nbr2, result_n);
    cr_expect_eq((result_n->str)[0], '-');
}

Test(put_sign, different_signs_positive_case)
{
    number nbr1 = {strdup("-1"), 2};
    number nbr2 = {strdup("16845"), 5};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(8 * sizeof(char));
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    put_sign(nbr1, nbr2, result_n);
    cr_expect_eq((result_n->str)[0], '+');
}

Test(put_sign, different_signs_negative_case)
{
    number nbr1 = {strdup("+1"), 2};
    number nbr2 = {strdup("-16845"), 6};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(8 * sizeof(char));
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    put_sign(nbr1, nbr2, result_n);
    cr_expect_eq((result_n->str)[0], '-');
}