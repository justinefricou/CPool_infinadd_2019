/*
** EPITECH PROJECT, 2019
** infin_add : display.c
** File description:
** Functions used to display the result
*/

#include <unistd.h>
#include "include/display.h"

void display_result(char *result)
{
    int i = 0;

    if (result[i] == '-')
        write(1, &(result[i]), 1);
    for (i = 0; result[i] <= '0'; i++);
    while (result[i] != '\0') {
        write(1, &(result[i]), i);
        i++;
    }
}