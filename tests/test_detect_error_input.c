/*
** EPITECH PROJECT, 2019
** infin_add : test_detect_error_input.c
** File description:
** Tests for detect_error_input
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

Test(detect_error_input, wrong_number_of_args_case)
{
    char *str1 = "48342";
    char *str2 = "63248";
    char *str3 = "0";
    char *str4 = "6";
    char *argv1[1] = {"a.out"};
    char *argv2[2] = {"a.out", str1};
    char *argv3[4] = {"a.out", str1, str2, str3};
    char *argv4[5] = {"a.out", str1, str2, str3, str4};

    cr_expect_eq(detect_input_errors(1, argv1), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(2, argv2), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(4, argv3), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(5, argv4), EXIT_FAILURE);
}

Test(detect_error_input, empty_or_null_string_case)
{
    char str1[1];
    char *str2 = NULL;

    str1[0] = '\0';
    char *argv1[3] = {"a.out", "468", str1};
    char *argv2[3] = {"a.out", "654", str2};
    cr_expect_eq(detect_input_errors(3, argv1), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv2), EXIT_FAILURE);
}

Test(detect_error_input, letters_in_strings_case)
{
    char *str1 = "f";
    char *str2 = "655u54";
    char *str3 = "562348522541h";
    char *str4 = "g562348522541";
    char *argv1[3] = {"a.out", "466", str1};
    char *argv2[3] = {"a.out", "466", str2};
    char *argv3[3] = {"a.out", "466", str3};
    char *argv4[3] = {"a.out", "466", str4};

    cr_expect_eq(detect_input_errors(3, argv1), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv2), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv3), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv4), EXIT_FAILURE);
}

Test(detect_error_input, several_signs_case)
{
    char *str1 = "--45824";
    char *str2 = "+-45824";
    char *str3 = "-+45824";
    char *str4 = "+-++45824";
    char *argv1[3] = {"a.out", "596", str1};
    char *argv2[3] = {"a.out", "596", str2};
    char *argv3[3] = {"a.out", "596", str3};
    char *argv4[3] = {"a.out", "596", str4};

    cr_expect_eq(detect_input_errors(3, argv1), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv2), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv3), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv4), EXIT_FAILURE);
}

Test(detect_error_input, misplaced_signs_case)
{
    char *str1 = "562348565-14855225212541";
    char *str2 = "5623484855225212541-";
    char *str3 = "5623484855225212541-+";
    char *argv1[3] = {"a.out", "596", str1};
    char *argv2[3] = {"a.out", "596", str2};
    char *argv3[3] = {"a.out", "596", str3};

    cr_expect_eq(detect_input_errors(3, argv1), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv2), EXIT_FAILURE);
    cr_expect_eq(detect_input_errors(3, argv3), EXIT_FAILURE);
}