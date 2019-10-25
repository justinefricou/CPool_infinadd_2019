/*
** EPITECH PROJECT, 2019
** infin_add : test_add_absolute_values_unsigned.c
** File description:
** Tests for function add_absolute_values : unsigned cases
*/

#include <criterion/criterion.h>
#include "../include/string_addition.h"
#include "../include/string_tools.h"
#include "../include/numbers_tools.h"
#include "../include/string_addition_abs_values.h"
#include "../include/number.h"

Test(add_absolute_values_unsigned_cases, same_size_filled_case)
{
    number nbr1 = {strdup("56874"), 5};
    number nbr2 = {strdup("65984"), 5};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 8);
    result_s[0] = '+';
    for (int i = 1; i < 8; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+122858");
}

Test(add_absolute_values_unsigned_cases, different_sizes_filled_case)
{
    number nbr1 = {strdup("99999"), 5};
    number nbr2 = {strdup("1"), 1};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 8);
    result_s[0] = '+';
    for (int i = 1; i < 8; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+100000");
}

Test(add_absolute_values_unsigned_cases, same_size_not_filled_case)
{
    number nbr1 = {strdup("16874"), 5};
    number nbr2 = {strdup("15984"), 5};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 8);
    result_s[0] = '+';
    for (int i = 1; i < 8; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+032858");
}

Test(add_absolute_values_unsigned_cases, different_sizes_not_filled_case)
{
    number nbr1 = {strdup("1"), 1};
    number nbr2 = {strdup("15984"), 5};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 8);
    result_s[0] = '+';
    for (int i = 1; i < 8; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 7);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+015985");
}