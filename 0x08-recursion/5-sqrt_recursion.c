#include "main.h"

int act_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of number n
 * @n: number that is used to calculate the square root
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (act_sqrt_recursion(n, 0));
}

/**
 * act_sqrt_recursion - recurses to find natural
 * square root of number
 * @n: number that is used to calculate the sqaure root
 * @i: iterator
 * Return: result of square root
 */

int act_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (act_sqrt_recursion(n, i + 1));
}
