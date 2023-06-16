#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte size
 * @b: char to be copy
 * @s: memory area to be filled up
 * @n: number of times to copy char b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * _calloc - assigns memory for an array
 * @nmemb: number of elements present in array
 * @size: size of each different element
 * Return: pointer to assigned memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
