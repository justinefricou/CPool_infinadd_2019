/*
** EPITECH PROJECT, 2019
** infin_add : display.c
** File description:
** Functions used to display the result
*/

#include <unistd.h>
#include "include/display.h"
#include "include/number.h"

int display_result(number result)
{
    int i = 0;

    for (int ii = 0; result.str[ii] <= '0' && ii < result.length; ii++) {
        if(ii == (result.length) - 1) {
            write(1, &(result.str[ii]), 1);
            return (0);
        }
    }
    if ((result.str)[0] == '-')
        write(1, &((result.str)[0]), 1);
    for ( ; (result.str)[i] <= '0'; i++);
    while ((result.str)[i] != '\0') {
        write(1, &((result.str)[i]), 1);
        i++;
     }
     return (0);
}