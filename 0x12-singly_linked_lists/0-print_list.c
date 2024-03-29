#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints everthing of a linked list
 * @h: pointer that points to list_t
 * to print its elements
 * Return: amount of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
