/*
** EPITECH PROJECT, 2019
** infin_add : test_display_result.c
** File description:
** Tests for function display_result
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>

void display_result(char *result);

Test(display_result, full_cases, .init=cr_redirect_stdout)
{
    display_result("1");
    display_result("95725");
    display_result("-6741254");
    display_result("-5");
    display_result("+5");
    display_result("+892155");
    cr_assert_stdout_eq_str("195725-6741254-55892155");
}

Test(display_result, not_full_cases, .init=cr_redirect_stdout)
{
    display_result("001");
    display_result("0095725");
    display_result("-006741254");
    display_result("-05");
    display_result("+0005");
    display_result("+0892155");
    cr_assert_stdout_eq_str("195725-6741254-55892155");
}