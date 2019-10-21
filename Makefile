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

all:	$(NAME)	

$(NAME):	$(OBJ)	
			gcc -o $(NAME) $(OBJ)	

clean:	
		rm -f $(OBJ)	

fclean: clean	
		rm -f $(NAME)	

re:	fclean all	