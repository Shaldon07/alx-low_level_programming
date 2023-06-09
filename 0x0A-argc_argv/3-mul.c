#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts from a string to an integer
 * @s: string that is converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int x, y, z, ln, b, d;

	x = 0;
	y = 0;
	z = 0;
	ln = 0;
	b = 0;
	d = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	while (x < ln && b == 0)
	{
		if (s[x] == '-')
		{
			++y;
		}
		if (s[x] >= '0' && s[x] <= '9')
		{
			d = s[x] - '0';
			if (y % 2)
			{
				d = -d;
			}
			z = z * 10 + d;
			b = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
			{
				break;
			}
			b = 0;
		}
		x++;
	}
	if (b == 0)
		return (0);
	return (y);
}

/**
 * main - multiplication between two numbers
 * @argv: array of the arguments
 * @argc: number of the arguments
 * Return: 0 when sucessful and 1 when an error
 */

int main(int argc, char *argv[])
{
	int r, x1, x2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x1 = _atoi(argv[1]);
	x2 = _atoi(argv[2]);
	r = x1 * x2;

	printf("%d\n", r);
	return (0);
}

