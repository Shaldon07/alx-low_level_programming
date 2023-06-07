#include "main.h"

/**
 * _pow_recursion - gives back the value of x to the power of y
 * @x: base number
 * @y: exponent (power)
 * Return: value of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
