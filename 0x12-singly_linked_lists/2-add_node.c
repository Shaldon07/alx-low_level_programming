#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at the beginning
 * of linked list
 * @head: double pointer that points to list_t
 * @str: new string that shall be added in node
 * Return: address of new element
 * otherwise NULL when failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int y = 0;

	while (str[y])
		y++;

	x = malloc(sizeof(list_t));

	if (!y)
		return (NULL);

	x->str = strdup(str);
	x->len = y;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
