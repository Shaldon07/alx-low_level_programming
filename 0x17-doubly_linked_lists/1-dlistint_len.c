#include "lists.h"

/**
 * dlistint_len - function which returns amount of elements in list.
 * @h: pointer that points to the list
 * Return: amount of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;

	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
