#include "main.h"
/**
 * puts2 - function should print only one
 * character out of two starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longs = 0, t = 0, o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longs++;
	}
	t = longs - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
		_putchar(str[o]);
		}
	}
	_putchar('\n');
}
