/*
** EPITECH PROJECT, 2019
** infin_add : test_detect_error_input_normal_cases.c
** File description:
** Tests for detect_error_input : normal cases
*/

#include <criterion/criterion.h>
#include <stdlib.h>

int detect_input_errors(int argc, char **argv);

Test(detect_error_input, normal_unsigned_case)
{
    char *str1 = "48342";
    char *str2 = "63248";
    char *str3 = "0";
    char *str4 = "6";
    char *str5 = "493143655641745225";
    char *str6 = "56234856514855225212541";
    char *argv1[3] = {"a.out", str1, str2};
    char *argv2[3] = {"a.out", str3, str4};
    char *argv3[3] = {"a.out", str5, str6};

    cr_expect_eq(detect_input_errors(3, argv1), 0);
    cr_expect_eq(detect_input_errors(3, argv2), 0);
    cr_expect_eq(detect_input_errors(3, argv3), 0);
}

Test(detect_error_input, normal_signed_case)
{
    char *str1 = "-49325";
    char *str2 = "+5623485212541";
    char *argv[3] = {"a.out", str1, str2};

    cr_expect_eq(detect_input_errors(3, argv), 0);
}