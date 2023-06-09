#include "main.h"

/**
 * _memcpy - function which copies memory area
 * @n: number of bytes
 * @dest: where memory is stored
 * @src: where memory is copied
 * Return: memory that is copied with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
