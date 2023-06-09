#include <stdio.h>
#include "main.h"

/**
 * main - prints all received arguments
 * @argv: array of the arguments
 * @argc: number of the arguments
 * Return: always 0 when sucessful
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
