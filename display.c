/*
** EPITECH PROJECT, 2019
** infin_add : display.c
** File description:
** Functions used to display the result
*/

#include <unistd.h>
#include "include/display.h"
#include "include/number.h"

void display_result(number result) // changer la détection du 0
{
    int i = 0;

    if (result.str[result.length - 1] == '0')
        write(1, &(result.str[result.length - 1]), 1);
    else {
        for (i = 0; (result.str)[i] <= '0'; i++);
        if ((result.str)[0] == '-')
            write(1, &((result.str)[0]), 1);
        while ((result.str)[i] != '\0') {
            write(1, &((result.str)[i]), 1);
            i++;
        }
    }
}