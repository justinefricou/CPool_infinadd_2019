##
## EPITECH PROJECT, 2019
## Makefile : infin_add
## File description:
## A Makefile that compiles infin_add
##

SRC	=	main.c 	\
		error_detection.c 	\
		my_strlen.c 	

OBJ	=	$(SRC:.c=.o)	

NAME	=	infin_add	

SRC_TESTS =	error_detection.c 	\
			my_strlen.c 	\
			tests/test_is_digit.c 	\
			tests/test_is_sign.c 	\
			tests/test_str_is_num.c 	\
			tests/test_detect_error_input.c ##	\
		##	tests/test_ascii_to_digits.c 	

OBJ_TESTS	=	$(SRC_TESTS:.c=.o)	

NAME_TESTS = 	tests_infin_add	

all:	$(NAME)	

$(NAME):	$(OBJ)	
			gcc -o $(NAME) $(OBJ)	

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
			gcc -o $(NAME_TESTS) $(SRC_TESTS) --coverage -lcriterion 	
			./$(NAME_TESTS)	