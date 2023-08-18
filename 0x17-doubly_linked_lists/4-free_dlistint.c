#include "lists.h"

/**
 * free_dlistint - function which frees alist.
 * @head: pointer that points to head in function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
