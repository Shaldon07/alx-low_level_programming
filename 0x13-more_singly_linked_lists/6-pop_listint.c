#include "lists.h"

/**
 * pop_listint - removes the head node of linked list
 * @head: pointer that points to first element of the linked list
 * Return: the data inside the elements that was removed,
 * and 0 when the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (x);
}
