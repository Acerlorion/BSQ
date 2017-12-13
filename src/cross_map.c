/*
** EPITECH PROJECT, 2017
** cross_map.c
** File description:
** replace by cross
*/

#include <stdlib.h>
#include "bsq.h"

void cross_map(char *tmp, int map_len, int *map)
{
	int xy = 0;
	int size = 0;
	int height = 0;
	int width = 0;
	int pos_save = 0;
	int cpt = 1;

	find_imp(&xy, &size, map, map_len);
	pos_save = xy;
	height = size;
	width = size;
	while (height != 0) {
		into_cross(tmp, map, width, xy);
		xy = pos_save - ((count_carac(map) + 1) * cpt);
		height = height - 1;
		cpt = cpt + 1;
	}
	my_putstr(tmp);
}

void into_cross(char *tmp, int *map, int width, int xy)
{
	while (width != 0) {
		if (map[xy] == -1)
			xy = xy - 1;
		tmp[xy] = 'x';
		xy = xy - 1;
		width = width - 1;
	}
}

void find_imp(int *xy, int *size, int *map, int map_len)
{
	int imp = 0;
	int res = 0;
	int neg_nbr = -1;

	while (imp != map_len) {
		if (map[imp] == -1)
			neg_nbr = neg_nbr + 1;
		if (res < map[imp]) {
			res = map[imp];
			*xy = imp;
		}
		imp = imp + 1;
	}
	*size = res;
}
