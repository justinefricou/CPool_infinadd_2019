/*
** EPITECH PROJECT, 2019
** infin_add : test_is_sign.c
** File description:
** Tests for is_sign
*/

#include <criterion/criterion.h>

int is_sign(char c);

Test(is_sign, normal_case)
{
    cr_expect_eq(is_sign('-'), 1);
    cr_expect_eq(is_sign('+'), 1);
}

Test(is_sign, not_a_sign_case)
{
    cr_expect_eq(is_sign('f'), 0);
    cr_expect_eq(is_sign('\0'), 0);
    cr_expect_eq(is_sign('\n'), 0);
}