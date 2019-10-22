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

int is_sign(char c)
{
    if (c == '-' || c == '+') {
        return (1);
    }
    return (0);
}

int str_is_num(char *str)
{
    if (str[0] == '\0')
        return (0);
    else if (is_sign(str[0]) && str[1] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && (!is_sign(str[i]) && !is_digit(str[i])))
            return (0);
        else if (i != 0 && !is_digit(str[i]))
            return (0);
    }
    return (1);
}

int detect_input_errors(int argc, char **argv)
{
    if (argc != 3)
        return (EXIT_FAILURE);
    if (argv[1] == NULL || argv[2] == NULL)
        return (EXIT_FAILURE);
    if (!(str_is_num(argv[1]) && str_is_num(argv[2])))
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}