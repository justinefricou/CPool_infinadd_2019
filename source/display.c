/*
** EPITECH PROJECT, 2019
** infin_add : display.c
** File description:
** Functions used to display the result
*/

#include <unistd.h>
#include "display.h"
#include "number.h"

int display_result(number result)
{
    int i = 0;

    for (int i = 0; (result.str)[i] <= '0' && i < result.length; i++) {
        if((result.str)[i + 1] == 0) {
            write(1, &((result.str)[i]), 1);
            return (0);
        }
    }
    if ((result.str)[0] == '-')
        write(1, &((result.str)[0]), 1);
    for ( ; (result.str)[i] <= '0'; i++);
    for ( ;(result.str)[i] != 0; i++)
        write(1, &((result.str)[i]), 1);
    write(1, "\n", 1);
     return (0);
}