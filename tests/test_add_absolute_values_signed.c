/*
** EPITECH PROJECT, 2019
** infin_add : test_add_absolute_values_signed.c
** File description:
** Tests for function add_absolute_values : signed cases
*/

#include <criterion/criterion.h>
#include "string_addition.h"
#include "string_tools.h"
#include "numbers_tools.h"
#include "string_addition_abs_values.h"
#include "number.h"

Test(add_absolute_values_signed_cases, same_size_filled_case)
{
    number nbr1 = {strdup("-611111"), 7};
    number nbr2 = {strdup("-611111"), 7};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 10);
    result_s[0] = '-';
    for (int i = 1; i < 10; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 9);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "-01222222");
}

Test(add_absolute_values_signed_cases, different_sizes_filled_case)
{
    number nbr1 = {strdup("-999"), 4};
    number nbr2 = {strdup("-1"), 2};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 7);
    result_s[0] = '-';
    for (int i = 1; i < 7; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 6);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "-01000");
}

Test(add_absolute_values_signed_cases, same_size_not_filled_case)
{
    number nbr1 = {strdup("+111101"), 7};
    number nbr2 = {strdup("-111101"), 7};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 10);
    result_s[0] = '-';
    for (int i = 1; i < 10; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 9);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "-00222202");
}

Test(add_absolute_values_signed_cases, different_sizes_not_filled_case)
{
    number nbr1 = {strdup("-506"), 4};
    number nbr2 = {strdup("-1"), 2};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 7);
    result_s[0] = '-';
    for (int i = 1; i < 7; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 6);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "-00507");
}