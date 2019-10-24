/*
** EPITECH PROJECT, 2019
** infin_add : test_is_digit.c
** File description:
** Tests for is_digit
*/

#include <criterion/criterion.h>
#include "../include/error_detection.h"

Test(is_digit, case_digit)
{
    for (char c = '0'; c <= '9'; c++) {
        cr_expect_eq(is_digit(c), 1);
    }
}

Test(is_digit, case_not_digit)
{
    cr_expect_eq(is_digit('\0'), 0);
    cr_expect_eq(is_digit('\n'), 0);
    cr_expect_eq(is_digit('+'), 0);
    cr_expect_eq(is_digit('h'), 0);
    cr_expect_eq(is_digit(' '), 0);
}