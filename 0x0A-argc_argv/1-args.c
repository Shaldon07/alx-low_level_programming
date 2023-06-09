#include <stdio.h>
#include "main.h"

/**
 * main - prints program's number of arguments passed
 * @argv: array of the arguments (IGNORED!)
 * @argc: number of the arguments present
 * Return: always 0 when sucessful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	print("%d\n", argc - 1);
	return (0);
}
