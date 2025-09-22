#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* 0-print_name.c */
void print_name(char *name, void (*f)(char *));

/* 1-array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

/* 2-int_index.c */
int int_index(int *array, int size, int (*cmp)(int));

#endif
