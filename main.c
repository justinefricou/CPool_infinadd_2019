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
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9')
            str[i] = str[i] - 48;
    }
}

void digits_to_ascii(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (0 <= str[i] && str[i] <= 9)
            str[i] = str[i] + 48;
    }
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
    int i = 0;

    digits_to_ascii(result);
    if (result[i] == '-')
        write(1, &(result[i]), 1);
    for (i = 0; result[i] <= '0'; i++);
    while (result[i] != '\0') {
        write(1, &(result[i]), i);
        i++;
    }
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