#include "lists.h"

/**
 * listint_len - returns amount of elements present
 * in linked lists
 * @h: linked list of type listint_t to cross over
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
