#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of size and
 * assigns char c
 * @size: size of the array
 * @c: the char that needs to be assigned
 * Return: the pointer to the array
 * and NULL if otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
