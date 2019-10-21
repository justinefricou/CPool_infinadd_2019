/*
** EPITECH PROJECT, 2019
** infin_add : main.c
** File description:
** A program that performs an infinite addition.
*/

#include <stdlib.h>

int detect_input_errors(int argc, char **argv);
int my_strlen(char *str);

void ascii_to_digits(char *str)
{
    //!
}

int max(int a, int b)
{
    if (a < b)
        return (b);
    return (a);
}

void add_strings(char *number1, char *number2, char *result)
{
    //!
}

void display_result(char *result)
{
    //!
}

int main(int argc, char **argv)
{
    char *result = NULL;
    int length_result = 0;

    if (detect_input_errors(argc, argv) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    ascii_to_digits(argv[1]);
    ascii_to_digits(argv[2]);
    length_result = max(my_strlen(argv[1]), my_strlen(argv[2])) + 1;
    result = malloc(sizeof(char) * (length_result + 1));
    if (result == NULL)
        return (EXIT_FAILURE);
    add_strings(argv[1], argv[2], result);
    display_result(result);
    free(result);
    return (EXIT_SUCCESS);
}