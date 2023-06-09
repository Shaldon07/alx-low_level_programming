#include "main.h"

/**
 * _strncat - integraates two strings
 * using n bytes from src
 * @n: input value
 * @src: input value
 * @dest: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
