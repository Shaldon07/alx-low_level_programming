#include "lists.h"

/**
 * sum_listint - computes sum of all the data in listint_t list
 * @head: 1st node in linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tp = head;

	while (tp)
	{
		sum += tp->n;
		tp = tp->next;
	}

	return (sum);
}
