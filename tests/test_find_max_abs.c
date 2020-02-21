/*
** EPITECH PROJECT, 2019
** infin_add : test_find_max_abs.c
** File description:
** Tests for function find_max_abs
*/

#include <criterion/criterion.h>
#include "math_tools.h"
#include "string_tools.h"
#include "number.h"

Test(test_find_max_abs, different_size_case)
{
    number nbr1 = {strdup("1"), 1};
    number nbr2 = {strdup("15"), 2};
    number nbr3 = {strdup("658618"), 6};

    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    ascii_to_digits(nbr3.str);
    cr_expect_eq(find_max_abs(nbr1, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr1, nbr3), 1);
    cr_expect_eq(find_max_abs(nbr2, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr3, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr3), 1);
    cr_expect_eq(find_max_abs(nbr3, nbr2), -1);
}

Test(test_find_max_abs, same_size_not_equals_case)
{
    number nbr1 = {strdup("2"), 1};
    number nbr2 = {strdup("0"), 1};
    number nbr3 = {strdup("568"), 3};
    number nbr4 = {strdup("567"), 3};

    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    ascii_to_digits(nbr3.str);
    ascii_to_digits(nbr4.str);
    cr_expect_eq(find_max_abs(nbr1, nbr2), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr1), 1);
    cr_expect_eq(find_max_abs(nbr3, nbr4), -1);
    cr_expect_eq(find_max_abs(nbr4, nbr3), 1);
}

Test(test_find_max_abs, equals_case)
{
    number nbr1 = {strdup("1"), 1};
    number nbr2 = {strdup("1"), 1};
    number nbr3 = {strdup("006948"), 6};
    number nbr4 = {strdup("6948"), 4};

    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    ascii_to_digits(nbr3.str);
    ascii_to_digits(nbr4.str);
    cr_expect_eq(find_max_abs(nbr1, nbr2), 0);
    cr_expect_eq(find_max_abs(nbr2, nbr1), 0);
    cr_expect_eq(find_max_abs(nbr3, nbr4), 0);
    cr_expect_eq(find_max_abs(nbr4, nbr3), 0);
}

Test(test_find_max_abs, signed_equal_case)
{
    number nbr1 = {strdup("-1"), 2};
    number nbr2 = {strdup("+1"), 2};
    number nbr3 = {strdup("+568"), 4};
    number nbr4 = {strdup("568"), 3};
    number nbr5 = {strdup("-0"), 2};
    number nbr6 = {strdup("000"), 3};

    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    ascii_to_digits(nbr3.str);
    ascii_to_digits(nbr4.str);
    ascii_to_digits(nbr5.str);
    ascii_to_digits(nbr6.str);
    cr_expect_eq(find_max_abs(nbr1, nbr2), 0);
    cr_expect_eq(find_max_abs(nbr3, nbr4), 0);
    cr_expect_eq(find_max_abs(nbr5, nbr6), 0);
    cr_expect_eq(find_max_abs(nbr6, nbr5), 0);
}

Test(test_find_max_abs, signed_not_equal_case)
{
    number nbr1 = {strdup("-1"), 2};
    number nbr2 = {strdup("2"), 1};
    number nbr3 = {strdup("0"), 1};
    number nbr4 = {strdup("-568"), 4};
    number nbr5 = {strdup("567"), 3};

    ascii_to_digits(nbr1.str);
    ascii_to_digits(nbr2.str);
    ascii_to_digits(nbr3.str);
    ascii_to_digits(nbr4.str);
    ascii_to_digits(nbr5.str);
    cr_expect_eq(find_max_abs(nbr1, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr1, nbr3), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr3), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr3, nbr1), 1);
    cr_expect_eq(find_max_abs(nbr4, nbr5), -1);
}