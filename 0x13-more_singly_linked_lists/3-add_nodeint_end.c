#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer that points to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer that points to the new node,
 * or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *tp = *head;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = p;

	return (p);
}
