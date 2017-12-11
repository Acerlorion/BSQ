##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## BSQ's Makefile
##

SRC	=	src/BSQ_main.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude

NAME	=	bsq

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
