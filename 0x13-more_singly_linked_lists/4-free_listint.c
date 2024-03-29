#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list int_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
