#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when sucessful
 *
 */

int main(void)
{
	char i;
	char m;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
