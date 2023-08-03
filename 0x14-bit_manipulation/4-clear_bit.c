#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: pointer that points to the number to change
 * @index: index of bit to be clear
 * Return: 1 when successful, -1 when failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
