/*
** EPITECH PROJECT, 2019
** infin_add : test_add_absolute_values_zero.c
** File description:
** Tests for function add_absolute_values : zero cases
*/

#include <criterion/criterion.h>
#include "string_addition.h"
#include "string_tools.h"
#include "numbers_tools.h"
#include "string_addition_abs_values.h"
#include "number.h"

Test(add_absolute_values_zero_cases, both_zero_case)
{
    number nbr1 = {strdup("0"), 1};
    number nbr2 = {strdup("000"), 3};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 6);
    result_s[0] = '+';
    for (int i = 1; i < 6; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 5);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+0000");
}

Test(add_absolute_values_zero_cases, both_signed_one_zero_case)
{
    number nbr1 = {strdup("+00000"), 6};
    number nbr2 = {strdup("-0659804"), 8};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 11);
    result_s[0] = '+';
    for (int i = 1; i < 11; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 10);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+000659804");
}

Test(add_absolute_values_zero_cases, both_unsigned_one_zero_case)
{
    number nbr1 = {strdup("00000"), 5};
    number nbr2 = {strdup("0659804"), 7};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 10);
    result_s[0] = '+';
    for (int i = 1; i < 10; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 9);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+00659804");
}

Test(add_absolute_values_zero_cases, one_signed_one_zero_case)
{
    number nbr1 = {strdup("00000"), 6};
    number nbr2 = {strdup("-065980"), 7};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 10);
    result_s[0] = '+';
    for (int i = 1; i < 10; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 9);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+00065980");
}

Test(add_absolute_values_zero_cases, one_signed_and_zero_case)
{
    number nbr1 = {strdup("-00000"), 6};
    number nbr2 = {strdup("0659804"), 7};
    number *result_n = NULL;
    char *result_s = NULL;

    result_s = malloc(sizeof(char) * 10);
    result_s[0] = '+';
    for (int i = 1; i < 10; i++) {
        result_s[i] = 0;
    }
    result_n = create_number(result_s, 9);
    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    add_absolute_values(nbr1, nbr2, result_n);
    digits_to_ascii(result_n);
    cr_expect_str_eq(result_n->str, "+00659804");
}