#include "main.h"
#include <stdlib.h>

/**
 * *array_range - produces an array of integers
 * @min: minimum range of values saved
 * @max: maximum range of values saved and amount of elements
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *p;
	int x, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;

	return (p);
}
