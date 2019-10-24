/*
** EPITECH PROJECT, 2019
** infin_add : test_ascii_to_digits.c
** File description:
** Tests for function ascii_to_digits
*/

#include <criterion/criterion.h>
#include "../include/string_tools.h"

Test(ascii_to_digits, normal_case)
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