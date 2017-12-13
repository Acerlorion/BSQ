##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## BSQ's Makefile
##

SRC	=	src/BSQ_main.c	\
		src/prepa_algo.c	\
		src/into_algo.c	\
		src/cross_map.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude

NAME	=	bsq

$(NAME):	$(OBJ)
	make -Clib/my
	gcc -o $(NAME) $(OBJ) -Llib/my -lmy

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	make fclean -Clib/my

re:	fclean all
