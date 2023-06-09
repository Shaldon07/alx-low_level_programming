#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0 when successful
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
