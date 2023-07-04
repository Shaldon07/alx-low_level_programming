#include "lists.h"

/**
 * print_listint - prints all members of the linked list
 * @h: linked list of type listint_t
 * that will be printed
 * Return: amount of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
