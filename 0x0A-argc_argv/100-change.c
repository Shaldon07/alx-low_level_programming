#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * that is needed to make change
 * @argv: array of the arguments
 * @argc: number of the arguments
 * Return: always 0 when sucessful, 1 when error
 */

int main(int argc, char *argv[])
{
	int x, y, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	r = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			r++;
			x -= coins[y];
		}
	}

	printf("%d\n", r);
	return (0);
}
