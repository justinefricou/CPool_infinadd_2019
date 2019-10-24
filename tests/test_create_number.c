/*
** EPITECH PROJECT, 2019
** infin_add : test_create_number.c
** File description:
** Tests for function create_number
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "../include/number.h"
#include "../include/numbers_tools.h"

Test(test_create_number, no_sign_case)
{
    number *nbr1;
    number *nbr2;

    nbr1 = create_number("0123456789");
    nbr2 = create_number("1");
    cr_expect_eq(nbr1->length, 10);
    cr_expect_str_eq(nbr1->str, "0123456789");
    cr_expect_eq(nbr2->length, 1);
    cr_expect_str_eq(nbr2->str, "1");
}

Test(test_create_number, signed_case)
{
    number *nbr1;
    number *nbr2;
    number *nbr3;
    number *nbr4;

    nbr1 = create_number("-0123456789");
    nbr2 = create_number("-1");
    nbr3 = create_number("+0123456789");
    nbr4 = create_number("+1");
    cr_expect_eq(nbr1->length, 11);
    cr_expect_str_eq(nbr1->str, "-0123456789");
    cr_expect_eq(nbr2->length, 2);
    cr_expect_str_eq(nbr2->str, "-1");
    cr_expect_eq(nbr3->length, 11);
    cr_expect_str_eq(nbr3->str, "+0123456789");
    cr_expect_eq(nbr4->length, 2);
    cr_expect_str_eq(nbr4->str, "+1");
}

Test(test_create_number, zero_case)
{
    number *nbr1;
    number *nbr2;

    nbr1 = create_number("0");
    nbr2 = create_number("000");
    cr_expect_eq(nbr1->length, 1);
    cr_expect_str_eq(nbr1->str, "0");
    cr_expect_eq(nbr2->length, 3);
    cr_expect_str_eq(nbr2->str, "000");
}