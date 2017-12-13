/*
** EPITECH PROJECT, 2017
** into_algo.c
** File description:
** do the algo thing
*/

#include <stdlib.h>
#include "bsq.h"

void transfo_int(char *tmp, int map_len, int *map)
{
	int in = count_carac(map);
	int len = count_carac(map) + 1;

	while (in < map_len - 1) {
		if (map[in] != -1 && map[in] != 0 && in % len != 0)
			map[in] = gen_algo(map, in, len);
		in = in + 1;
	}
	cross_map(tmp, map_len, map);
}

int gen_algo(int *map, int in, int len)
{
	int res = map[in - 1];

	if (map[in - len] < res)
		res = map[in - len];
	if (map[in - len - 1] < res)
		res = map[in - len - 1];
	res = res + 1;
	return (res);
}

int count_carac(int *map)
{
	int i_map = 0;

	while (map[i_map] != -1)
		i_map = i_map + 1;
	return (i_map);
}
