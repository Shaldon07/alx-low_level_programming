#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name
 * @argv: array of the arguments
 * @argc: number of the arguments
 * Return: always 0 when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
