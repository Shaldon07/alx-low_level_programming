#include "main.h"

/**
 * _memset - fills block of memory with a particular value
 * @s: start address to be filled of memory
 * @b: preferred value
 * @n: number of bytes that need to be changed
 * Return: changed array for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
