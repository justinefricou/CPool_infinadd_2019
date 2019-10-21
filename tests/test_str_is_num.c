/*
** EPITECH PROJECT, 2019
** infin_add : tests_str_is_num.c
** File description:
** Tests for str_is_num
*/

#include <criterion/criterion.h>

int str_is_num(char *str);

Test(str_is_num, normal_case)
{
    cr_expect_eq(str_is_num("4965"), 1);
    cr_expect_eq(str_is_num("0"), 1);
    cr_expect_eq(str_is_num("496285206844168451554445"), 1);
    cr_expect_eq(str_is_num("-425445"), 1);
    cr_expect_eq(str_is_num("+49625445"), 1);
}

Test(str_is_num, empty_case)
{
    char str[1];

    str[0] = '\0';
    cr_expect_eq(str_is_num(str), 0);
}

Test(str_is_num, several_signs_case)
{
    cr_expect_eq(str_is_num("++5"), 0);
    cr_expect_eq(str_is_num("--96542254"), 0);
    cr_expect_eq(str_is_num("-+5864"), 0);
    cr_expect_eq(str_is_num("+-4554114"), 0);
}

Test(str_is_num, sign_not_at_beggining_case)
{
    cr_expect_eq(str_is_num("65-425"), 0);
    cr_expect_eq(str_is_num("544+"), 0);
    cr_expect_eq(str_is_num("+455-524"), 0);
    cr_expect_eq(str_is_num("-4+9+-815"), 0);
}

Test(str_is_num, not_digit_case)
{
    cr_expect_eq(str_is_num("+"), 0);
    cr_expect_eq(str_is_num("++"), 0);
    cr_expect_eq(str_is_num("jdjf"), 0);
    cr_expect_eq(str_is_num(" "), 0);
    cr_expect_eq(str_is_num("-hejzh"), 0);
    cr_expect_eq(str_is_num("596g"), 0);
    cr_expect_eq(str_is_num("+5h87t"), 0);
}