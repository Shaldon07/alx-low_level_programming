#include "lists.h"

/**
 * insert_nodeint_at_index - a new node is placed in linked list,
 * at a certain position
 * @head: pointer that points to the 1st node in the list
 * @idx: guide to where the new node is added to
 * @n: data to be placed in the new node
 * Return: pointer that points to new node
 * otherwise if failure, NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *p;
	listint_t *tp = *head;

	p = malloc(sizeof(listint_t));
	if (!p || !head)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}

	for (x = 0; tp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			p->next = tp->next;
			tp->next = p;
			return (p);
		}
		else
			tp = tp->next;
	}

	return (NULL);
}
