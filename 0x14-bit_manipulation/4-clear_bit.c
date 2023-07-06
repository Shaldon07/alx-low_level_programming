#include "main.h"

/**
 * clear_bit - sets the value of a particular bit to 0
 * @n: pointer that points to number to change
 * @index: index of bit to clear
 * Return: 1 when successful, -1 when failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
