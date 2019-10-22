/*
** EPITECH PROJECT, 2019
** infin_add : error_detection.h
** File description:
** Fonctions used to detect errors in infin_add
*/

#ifndef DEF_ERROR_DETECTION
#define DEF_ERROR_DETECTION

int is_digit(char c);
int is_sign(char c);
int str_is_num(char *str);
int detect_input_errors(int argc, char **argv);

#endif // DEF_ERROR_DETECTION