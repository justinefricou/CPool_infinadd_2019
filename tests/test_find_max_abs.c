/*
** EPITECH PROJECT, 2019
** infin_add : test_find_max_abs.c
** File description:
** Tests for function find_max_abs
*/

#include <criterion/criterion.h>
#include "../include/math_tools.h"
#include "../include/number.h"

Test(test_find_max_abs, different_size_case)
{
    number nbr1 = {"1", 1};
    number nbr2 = {"15", 2};
    number nbr3 = {"658618", 6};

    cr_expect_eq(find_max_abs(nbr1, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr1, nbr3), 1);
    cr_expect_eq(find_max_abs(nbr2, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr3, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr3), 1);
    cr_expect_eq(find_max_abs(nbr3, nbr2), -1);
}

Test(test_find_max_abs, same_size_not_equals_case)
{
    number nbr1 = {"1", 1};
    number nbr2 = {"2", 1};
    number nbr3 = {"0", 1};
    number nbr4 = {"568", 3};
    number nbr5 = {"567", 3};

    cr_expect_eq(find_max_abs(nbr1, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr1, nbr3), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr3), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr3, nbr1), 1);
    cr_expect_eq(find_max_abs(nbr3, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr4, nbr5), -1);
    cr_expect_eq(find_max_abs(nbr5, nbr4), 1);
}

Test(test_find_max_abs, equals_case)
{
    number nbr1 = {"1", 1};
    number nbr2 = {"1", 1};
    number nbr3 = {"006948", 6};
    number nbr4 = {"6948", 4};

    cr_expect_eq(find_max_abs(nbr1, nbr2), 0);
    cr_expect_eq(find_max_abs(nbr2, nbr1), 0);
    cr_expect_eq(find_max_abs(nbr3, nbr4), 0); //
    cr_expect_eq(find_max_abs(nbr4, nbr3), 0); //
}

Test(test_find_max_abs, signed_equal_case)
{
    number nbr1 = {"-1", 2};
    number nbr2 = {"+1", 2};
    number nbr3 = {"+568", 4};
    number nbr4 = {"568", 3};
    number nbr5 = {"-0", 2};
    number nbr6 = {"0", 1};

    cr_expect_eq(find_max_abs(nbr1, nbr2), 0); //
    cr_expect_eq(find_max_abs(nbr2, nbr1), 0); //
    cr_expect_eq(find_max_abs(nbr3, nbr4), 0); //
    cr_expect_eq(find_max_abs(nbr4, nbr3), 0); //
    cr_expect_eq(find_max_abs(nbr5, nbr6), 0); //
    cr_expect_eq(find_max_abs(nbr6, nbr5), 0); //
}

Test(test_find_max_abs, signed_not_equal_case)
{
    number nbr1 = {"-1", 1};
    number nbr2 = {"2", 1};
    number nbr3 = {"0", 1};
    number nbr4 = {"-568", 3};
    number nbr5 = {"567", 3};

    cr_expect_eq(find_max_abs(nbr1, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr1, nbr3), -1); //
    cr_expect_eq(find_max_abs(nbr2, nbr3), -1);
    cr_expect_eq(find_max_abs(nbr2, nbr1), -1);
    cr_expect_eq(find_max_abs(nbr3, nbr1), 1); //
    cr_expect_eq(find_max_abs(nbr3, nbr2), 1);
    cr_expect_eq(find_max_abs(nbr4, nbr5), -1); //
    cr_expect_eq(find_max_abs(nbr5, nbr4), 1); //
}