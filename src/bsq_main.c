/*
** EPITECH PROJECT, 2017
** BSQ_main.c
** File description:
** BSQ's main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"

int main(int ac, char **av)
{
    int fd = 0;

    if (ac != 2)
        return (84);
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    if (take_the_map(fd, av[1]) == 84)
        return (84);
    close(fd);
    return (0);
}

int take_the_map(int fd, char *path)
{
    long long area = 0;
    struct stat *st = malloc(sizeof(struct stat));;
    char *map_brut = NULL;
    char *tmp = NULL;

    if (stat(path, st) == -1)
        return (84);
    area = (long long)st->st_size;
    map_brut = malloc(sizeof(char) * area + 1);
    if (read(fd, map_brut, area) == -1)
        return (84);
    map_brut[area] = '\0';
    tmp = map_brut;
    while (*tmp != '.' && *tmp != 'o')
        tmp = tmp + 1;
    if (prepa_algo(tmp, map_brut) == 84)
        return (84);
    free(map_brut);
    free(st);
    return (0);
}
