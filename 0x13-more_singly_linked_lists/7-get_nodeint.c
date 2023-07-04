#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a
 * particular guide in a linked list
 * @head: 1st node in linked list
 * @index: guide of the node to return
 * Return: pointer that points to the
 * node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tp = head;

	while (tp && x < index)
	{
		tp = tp->next;
		x++;
	}

	return (tp ? tp : NULL);
}
