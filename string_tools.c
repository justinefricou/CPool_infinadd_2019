/*
** EPITECH PROJECT, 2019
** infin_add : string_tools.c
** File description:
** Several functions using strings for infin_add project
*/

#include "include/string_tools.h"

int my_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}

void ascii_to_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9')
            str[i] = str[i] - 48;
    }
}

void digits_to_ascii(char *str, int length_str)
{
    for (int i = 0; i < length_str; i++) {
        if (0 <= str[i] && str[i] <= 9)
            str[i] = str[i] + 48;
    }
}