#include <stdio.h>

/**
 * main - main function
 *
 * Return: Sucessful then returns function to zero
 *
 */

int main(void)
{
	int n = 0;
	int m = 1;
	int n_max = 98;
	int m_max = 99;

	while (n <= n_max)
	{
		m = n + 1;
		while (m <= m_max)
		{
			putchar(n < 9 ? 0 + '0' : (n / 10) + '0');
			putchar(n < 9 ? n + '0' : (n % 10) + '0');
			putchar(' ');
			putchar(m < 9 ? 0 + '0' : (m / 10) + '0');
			putchar(m < 9 ? m + '0' : (m % 10) + '0');
			if (n != n_max)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
