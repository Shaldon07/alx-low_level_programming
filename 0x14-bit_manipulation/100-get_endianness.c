#include "main.h"

/**
 * get_endianness - checks machine for when it is little or big endian
 * Return: 0 when big, 1 when little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
