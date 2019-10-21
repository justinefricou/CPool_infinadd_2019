/*
** EPITECH PROJECT, 2019
** infin_add : error_detection.c
** File description:
** Fonctions used to detect errors in infin_add
*/

#include <stdlib.h>

int is_digit(char c)
{
    if (c < '0' || '9' < c)
        return (0);
    return (1);
}

int str_is_num(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && (str[i] != '-' && str[i] != '+' && !is_digit(str[i])))
            return (0);
        else if (!is_digit(str[i]))
            return (0);
    }
    return (1);
}

int detect_input_errors(int argc, char **argv)
{
    if (argc != 3)
        return (EXIT_FAILURE);
    if (!(str_is_num(argv[1]) && str_is_num(argv[2])))
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}