##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## A Makefile to compile infin_add
##

NAME	=	infin_add

SRC	=	source/main.c\
		source/math_tools.c\
		source/string_addition.c\
		source/string_tools.c\
		source/error_detection.c\
		source/display.c\
		source/numbers_tools.c\
		source/string_addition_abs_values.c

OBJ	=	$(SRC:.c=.o)

NAME_TESTS = 	test_infin_add

SRC_TESTS = 	source/math_tools.c\
				source/string_tools.c\
				source/error_detection.c\
				source/display.c\
				source/string_addition.c\
				source/numbers_tools.c\
				source/string_addition_abs_values.c\
				tests/test_str_is_num.c\
				tests/test_my_strlen.c\
				tests/test_max.c\
				tests/test_is_sign.c\
				tests/test_is_digit.c\
				tests/test_get_sign.c\
				tests/test_display_result.c\
				tests/test_digits_to_ascii.c\
				tests/test_ascii_to_digits.c\
				tests/test_detect_error_input_no_errors.c\
				tests/test_detect_error_input_errors.c\
				tests/test_create_number.c\
				tests/test_find_max_abs.c\
				tests/test_put_sign.c\
				tests/test_add_absolute_values_unsigned.c\
				tests/test_add_absolute_values_signed.c\
				tests/test_add_absolute_values_zero.c

CFLAGS	+=	-Wall -Wextra -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f $(OBJ_TESTS)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)
		rm -f *.gcno
		rm -f *.gcda

re:	fclean all

tests_run: 	$(OBJ_TESTS)
			gcc -o $(NAME_TESTS) $(SRC_TESTS) $(CFLAGS) --coverage -lcriterion
			./$(NAME_TESTS)