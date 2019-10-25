/*
** EPITECH PROJECT, 2019
** infin_add : string_addition_abs_values.c
** File description:
** Functions used to add or substract the absolute values of the strings
*/

#include "include/math_tools.h"
#include "include/string_addition.h"
#include "include/numbers_tools.h"
#include "include/string_tools.h"
#include "include/string_addition_abs_values.h"
#include "include/number.h"

void add_absolute_values(number nbr1, number nbr2, number *res)
{
    int indx_r = res->length - 1;
    int indx1 = nbr1.length - 1;
    int indx2 = nbr2.length - 1;
    int start1 = 0;
    int start2 = 0;
    int sum_digits = 0;

    skip_useless_char(nbr1, &start1);
    skip_useless_char(nbr2, &start2);
    for ( ; indx1 >= start1 && indx2 >= start2; indx1--, indx2--, indx_r--) {
        sum_digits = (nbr1.str)[indx1] + (nbr2.str)[indx2] + (res->str)[indx_r];
        (res->str)[indx_r - 1] = (sum_digits) / 10;
        (res->str)[indx_r] = (sum_digits) % 10;
    }
    for ( ; indx1 >= start1; indx1--, indx_r--) {
        sum_digits = (nbr1.str)[indx1] + (res->str)[indx_r];
        (res->str)[indx_r - 1] = (sum_digits) / 10;
        (res->str)[indx_r] = (sum_digits) % 10;
    }
    for ( ; indx2 >= start2; indx2--, indx_r--) {
        sum_digits = (nbr2.str)[indx2] + (res->str)[indx_r];
        (res->str)[indx_r - 1] = (sum_digits) / 10;
        (res->str)[indx_r] = (sum_digits) % 10;
    }
}
 // à tester
void substract_absolute_values(number nbr1, number nbr2, number *res)
{
    int i_res = res->length - 1;
    int i1 = nbr1.length - 1;
    int i2 = nbr2.length - 1;
    int start1 = 0;
    int start2 = 0;
    int carry = 0;

    skip_useless_char(nbr1, &start1);
    skip_useless_char(nbr2, &start2);
    for ( ; i1 >= start1 && i2 >= start2; i1--, i2--, i_res--) {
        if ((nbr1.str)[i1] >= (nbr2.str)[i2] + carry) {
            (res->str)[i_res] = (nbr1.str)[i1] - (nbr2.str)[i2] - carry;
            carry = 0;
        } else {
            (res->str)[i_res] = (nbr1.str)[i1] + 10 - (nbr2.str)[i2] - carry;
            carry = 1;
        }
    }
    for ( ; i1 >= start1; i1--, i_res--) {
        if ((nbr1.str)[i1] >= carry) {
            (res->str)[i_res] = (nbr1.str)[i1] - carry;
            carry = 0;
        } else {
            (res->str)[i_res] = (nbr1.str)[i1] + 10 - carry;
            carry = 1;
        }
    }
}