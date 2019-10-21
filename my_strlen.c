/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Returning the number of characters in the string passed as parameter.
*/

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}
