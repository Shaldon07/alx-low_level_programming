#include <stdio.h>

/**
 * main - point of entry
 *
 * Return: sucessful when 0
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
