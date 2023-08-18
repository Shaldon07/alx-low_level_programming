#include "lists.h"

/**
 * sum_dlistint - function which returns the sum of all nodes
 * @head: pointer that points to head
 * Return: return sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
