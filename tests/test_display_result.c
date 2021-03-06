/*
** EPITECH PROJECT, 2019
** infin_add : test_display_result.c
** File description:
** Tests for function display_result
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "display.h"
#include "number.h"

Test(display_result, full_cases, .init=cr_redirect_stdout)
{
    number nbr1 = {"-6741254", 8};
    number nbr2 = {"-5", 2};
    number nbr3 = {"+5", 2};
    number nbr4 = {"+892150", 7};

    display_result(nbr1);
    display_result(nbr2);
    display_result(nbr3);
    display_result(nbr4);
    cr_assert_stdout_eq_str("-6741254-55892150");
}

Test(display_result, not_full_cases, .init=cr_redirect_stdout)
{
    number nbr1 = {"-00574", 6};
    number nbr2 = {"-06", 3};
    number nbr3 = {"+00068545", 9};
    number nbr4 = {"+06", 3};

    display_result(nbr1);
    display_result(nbr2);
    display_result(nbr3);
    display_result(nbr4);
    cr_assert_stdout_eq_str("-574-6685456");
}