#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of array.
 * Return: if an error occurs it will be NULL,
 * otherwise a pointer points to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int x;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		h->array[x] = NULL;

	return (h);
}
