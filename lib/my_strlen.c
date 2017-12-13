/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** qlf
*/

int my_strlen(char const *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	return (a);
}
