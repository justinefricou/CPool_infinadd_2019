/*
** EPITECH PROJECT, 2019
** infin_add : test_max.c
** File description:
** Tests for max function
*/

#include <criterion/criterion.h>
#include "math_tools.h"

Test(max, different_numbers_case)
{
    cr_expect_eq(max(865, 5), 865);
    cr_expect_eq(max(89, 654), 654);
}

Test(max, same_numbers_case)
{
    cr_expect_eq(max(58, 58), 58);
}

Test(max, different_signs_case)
{
    cr_expect_eq(max(65, -65), 65);
    cr_expect_eq(max(-95, 95), 95);
}