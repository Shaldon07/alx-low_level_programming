#include "main.h"

int act_is_prime(int n, int i);

/**
 * is_prime_number - says if integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 when n is a prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (act_is_prime(n, n - 1));
}

/**
 * act_is_prime - calculates if the number is prime recursively
 * @n: evaluated number
 * @i: iterator
 * Return: 1 when n is prime, 0 if otherwise
 */

int act_is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (act_is_prime(n, i - 1));
}
