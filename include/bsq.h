/*
** EPITECH PROJECT, 2017
** bsq.h
** File description:
** BSQ's header
*/

#ifndef BSQ_H_
#define BSQ_H_

int my_getnbr(char const *);
int my_strlen(char const *);
int strnbr_to_nbr(int, int, char const *);
int my_putstr(char const *);
int take_the_map(int, char *);
int prepa_algo(char *, char *);
void transfo_int(char *, int, int *);
int count_carac(int *);
int gen_algo(int *, int, int);
void cross_map(char *, int, int *);
void find_imp(int *, int *, int *, int);
void into_cross(char *, int *, int, int);

#endif /* BSQ_H_ */
