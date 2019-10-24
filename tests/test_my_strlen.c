/*
** EPITECH PROJECT, 2019
** infin_add : test_my_strlen.c
** File description:
** Tests for my_strlen
*/

#include <criterion/criterion.h>
#include "../include/string_tools.h"

Test(my_strlen, normal_case)
{
    char *str = "0123456789";

    cr_expect_eq(my_strlen(str), 10);
}

Test(my_strlen, single_character_case)
{
    char *str = "5";

    cr_expect_eq(my_strlen(str), 1);
}

Test(my_strlen, empty_string_case)
{
    char str[1];

    str[0] = '\0';
    cr_expect_eq(my_strlen(str), 0);
}