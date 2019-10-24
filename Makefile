##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## A Makefile that compiles cat
##

NAME	=		infin_add

SRC	=	main.c 	\
		math_tools.c 	\
		string_addition.c 	\
		string_tools.c 	\
		error_detection.c 	\
		display.c 	\
		numbers_tools.c

OBJ	=	$(SRC:.c=.o)

NAME_TESTS = 	test_infin_add

SRC_TESTS = 	math_tools.c 	\
				string_tools.c 	\
				error_detection.c 	\
				display.c 	\
				numbers_tools.c 	\
				tests/test_str_is_num.c 	\
				tests/test_my_strlen.c 	\
				tests/test_max.c 	\
				tests/test_is_sign.c 	\
				tests/test_is_digit.c 	\
				tests/test_get_sign.c 	\
				tests/test_display_result.c 	\
				tests/test_digits_to_ascii.c 	\
				tests/test_ascii_to_digits.c 	\
				tests/test_detect_error_input_no_errors.c 	\
				tests/test_detect_error_input_errors.c 	\
				tests/test_create_number.c



all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f $(OBJ_TESTS)
		rm -f *.gcno
		rm -f *.gcda

fclean: clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)

re:	fclean all

tests_run: 	$(OBJ_TESTS)
			gcc -o $(NAME_TESTS) $(SRC_TESTS) --coverage -lcriterion
			./$(NAME_TESTS)