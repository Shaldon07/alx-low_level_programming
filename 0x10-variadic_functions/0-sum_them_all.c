#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up of all its paramters.
 * @n: number of paramters passed to the function.
 * @...: variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 * otherwise the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, sum = 0;

	va_start(p, n);

	for (x = 0; x < n; x++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}
