##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## lib's Makefile
##

SRC	=	my_getnbr.c	\
		my_putstr.c	\
		my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-I../../include

$(NAME):	$(OBJ)
	cp $(SRC) ..
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
