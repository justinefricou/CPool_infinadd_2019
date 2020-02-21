/*
** EPITECH PROJECT, 2019
** infin_add : test_get_sign.c
** File description:
** Tests for get_sign
*/

#include <criterion/criterion.h>
#include "math_tools.h"

Test(get_sign, no_sign_case)
{
    cr_expect_eq(get_sign("865165"), '+');
    cr_expect_eq(get_sign("5"), '+');
}

Test(get_sign, minus_case)
{
    cr_expect_eq(get_sign("-524854"), '-');
    cr_expect_eq(get_sign("-5"), '-');
}

Test(get_sign, plus_case)
{
    cr_expect_eq(get_sign("+86245"), '+');
    cr_expect_eq(get_sign("+6"), '+');
}