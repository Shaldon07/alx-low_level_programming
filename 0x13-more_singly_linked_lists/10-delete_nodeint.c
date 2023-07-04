#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node in linked list
 * at a particular index
 * @head: pointer that points to 1st element in the list
 * @index: index of the node to remove
 * Return: 1 when sucessful, otherwise -1 when failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *c = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		x++;
	}


	c = tp->next;
	tp->next = c->next;
	free(c);

	return (1);
}
