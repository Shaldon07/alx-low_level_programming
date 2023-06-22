#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, following a new line.
 * @separator: string to be printed between numbers.
 * @n: amount of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ns;
	unsigned int idx;

	va_start(ns, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(ns, int));

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ns);
}
