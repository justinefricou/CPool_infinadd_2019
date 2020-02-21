/*
** EPITECH PROJECT, 2019
** infin_add : test_digits_to_ascii.c
** File description:
** Tests for function digits_to_ascii
*/

#include <criterion/criterion.h>
#include "string_tools.h"
#include "number.h"

Test(digits_to_ascii, several_digits_case)
{
    number *nbr = NULL;
    char *expected = "0123456789";
    char *actual = NULL;

    nbr = malloc(sizeof(number));

    actual = malloc(sizeof(char) * (10 + 1));
    for (int i = 0; i < 10; i++) {
        actual[i] = i;
    }
    actual[10] = '\0';
    nbr->str = actual;
    nbr->length = 10;
    digits_to_ascii(nbr);
    cr_expect_str_eq(nbr->str, expected);
    free(nbr->str);
    free(nbr);
}

Test(digits_to_ascii, single_digit_case)
{
    number *nbr = NULL;
    char *expected = "0";
    char *actual = NULL;

    nbr = malloc(sizeof(number));

    actual = malloc(sizeof(char) * (1 + 1));
    for (int i = 0; i < 1; i++) {
        actual[i] = i;
    }
    actual[1] = '\0';
    nbr->str = actual;
    nbr->length = 1;
    digits_to_ascii(nbr);
    cr_expect_str_eq(nbr->str, expected);
    free(nbr->str);
    free(nbr);
}