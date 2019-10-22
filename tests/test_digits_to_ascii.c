/*
** EPITECH PROJECT, 2019
** infin_add : test_digits_to_ascii.c
** File description:
** Tests for function digits_to_ascii
*/

#include <criterion/criterion.h>

void digits_to_ascii(char *str, int length_str);

Test(digits_to_ascii, several_digits_case)
{
    char *actual = NULL;
    char *expected = "0123456789";

    actual = malloc(sizeof(char) * 11);
    for (int i = 0; i < 10; i++) {
        actual[i] = (char)i;
    }
    actual[10] = '\0';
    digits_to_ascii(actual, 10);
    cr_expect_str_eq(actual, expected);
    free(actual);
}

Test(digits_to_ascii, single_digit_case)
{

}