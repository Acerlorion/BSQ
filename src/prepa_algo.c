/*
** EPITECH PROJECT, 2017
** prepa_algo.c
** File description:
** do the prepa thing
*/

#include <stdlib.h>
#include "bsq.h"

int prepa_algo(char *tmp, char *map)
{
	int map_len = my_strlen(tmp);
	int *tab = malloc(sizeof(int) * map_len);
	int inc = 0;

	while (inc != map_len) {
		if (tmp[inc] == 'o')
			tab[inc] = 0;
		else if (tmp[inc] == '.')
			tab[inc] = 1;
		else
			tab[inc] = -1;
		inc = inc + 1;
	}
	transfo_int(tmp, map_len, tab);
	free(tab);
	return (0);
}
