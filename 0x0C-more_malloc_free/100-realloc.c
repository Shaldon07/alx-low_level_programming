#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reassigns a memory block using
 * malloc and free
 * @ptr: pointer to the memory previously assigned by malloc
 * @old_size: size of the assigned memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly assigned memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *p1;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);

	if (!p)
		return (NULL);

	p1 = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p[x] = p1[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p[x] = p1[x];
	}

	free(ptr);
	return (p);
}
