#include "main.h"

/**
 * set_bit - sets bit at a particular index to 1
 * @n: pointer that points to the number to change
 * @index: index of bit to set to 1
 * Return: 1 when successful, -1 when failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
