#include "main.h"

/**
 * get_endianness - makes sure if a machine is little or big endian
 * Return: 0 when big, 1 when little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *) &x;

	return (*p);
}
