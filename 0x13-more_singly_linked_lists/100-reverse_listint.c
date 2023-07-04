#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer that points to the 1st node in list
 * Return: pointer that points to 1st node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = next;
	}

	*head = pv;

	return (*head);
}
