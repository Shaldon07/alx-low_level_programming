#include "main.h"

/**
 * more_numbers - Prints numbers from 0 till 14 ten times
 * Return: numbers from 0 till 14 ten times
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar('1');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
