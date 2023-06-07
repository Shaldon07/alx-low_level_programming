#include "main.h"

/**
 * _puts_recursion - similar function to puts();
 * @s: insertion
 * Return: 0 when successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
