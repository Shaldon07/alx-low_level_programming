#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns amount of elements in a linked list
 * @h: pointer that points to list_t
 * Return: amount of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
