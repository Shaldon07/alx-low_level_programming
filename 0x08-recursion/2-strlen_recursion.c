#include "main.h"

/**
 * _strlen_recursion - Gives back the length of string
 * @s: The number strings to be measured
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	int longs = 0;

	if (*s)
	{
		longs++;
		longs += _strlen_recursion(s + 1);
	}

	return (longs);
}
