/*
** EPITECH PROJECT, 2019
** infin_add : test_ascii_to_digits.c
** File description:
** Tests for function ascii_to_digits
*/

#include <criterion/criterion.h>
#include "string_tools.h"

Test(ascii_to_digits, unsigned_case)
{
    char expected1[11];
    char expected2[2];
    char *actual1 = strdup("0123456789");
    char *actual2 = strdup("5");

    for (int i = 0; i < 10; i++) {
        expected1[i] = i;
    }
    expected1[10] = '\0';
    expected2[0] = 5;
    expected2[1] = '\0';
    ascii_to_digits(actual1);
    ascii_to_digits(actual2);
    for (int i = 0; i < 10; i++) {
        cr_expect_eq(actual1[i], expected1[i]);
    }
    cr_expect_eq(actual2[0], expected2[0]);
}

Test(ascii_to_digits, positive_case)
{
    char expected[12];
    char *actual = strdup("+0123456789");

    expected[0] = '+';
    for (int i = 1; i < 11; i++) {
        expected[i] = i - 1;
    }
    expected[11] = '\0';
    ascii_to_digits(actual);
    for (int i = 0; i < 11; i++) {
        cr_expect_eq(actual[i], expected[i]);
    }
}

Test(ascii_to_digits, negative_case)
{
    char expected[3];
    char *actual = strdup("-5");

    expected[0] = '-';
    expected[1] = 5;
    expected[2] = '\0';
    ascii_to_digits(actual);
    cr_expect_eq(actual[0], expected[0]);
    cr_expect_eq(actual[1], expected[1]);
}