#include "main.h"

/**
 * factorial - returns factorial of a particular number.
 * @n: number that the factorial will come from
 * Return: factorial of number n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
