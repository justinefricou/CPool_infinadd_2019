/*
** EPITECH PROJECT, 2019
** infin_add : test_digits_to_ascii.c
** File description:
** Tests for function digits_to_ascii
*/

#include <criterion/criterion.h>
#include "../include/number.h"

void digits_to_ascii(number *nbr);

Test(digits_to_ascii, several_digits_case)
{
    number *nbr;
    char *expected = "0123456789";

    nbr->str = malloc(sizeof(char) * 11);
    for (int i = 0; i < 10; i++) {
        (nbr->str)[i] = (char)i;
    }
    (nbr->str)[10] = '\0';
    nbr->length = 10;
    digits_to_ascii(nbr);
    cr_expect_str_eq(nbr->str, expected);
    free(nbr->str);
    free(nbr);
}

Test(digits_to_ascii, single_digit_case)
{

}