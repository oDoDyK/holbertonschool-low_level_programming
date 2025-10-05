#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Node of a singly linked list
 * @str: String stored in the node (malloc'ed)
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: This structure defines a node of a singly linked list.
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* 0-print_lists.c */
size_t print_list(const list_t *h);

/* 1-list_len.c */
size_t list_len(const list_t *h);

#endif
