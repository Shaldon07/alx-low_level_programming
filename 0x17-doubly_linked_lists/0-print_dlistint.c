#include "lists.h"

/**
 * print_dlistint - function which prints all the elements of list
 * @h: pointer that points to the list
 * Return: amounts of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;

	for (x = 0; temp != NULL; x++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (x);
}
