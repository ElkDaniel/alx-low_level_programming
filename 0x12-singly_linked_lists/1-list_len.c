#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h: this is a pointer that points to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x;

	for (n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
