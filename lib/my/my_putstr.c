/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** ui
*/

#include <unistd.h>
#include "bsq.h"

int my_putstr(char const *str)
{
	int a = my_strlen(str);;

	write(1, str, a);
	return (0);
}
