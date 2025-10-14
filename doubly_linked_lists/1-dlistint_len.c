#include "lists.h"	
/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Description: This function traverses a doubly linked list and
 * counts the number of nodes it contains.
 *
 * Return: The total number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}

