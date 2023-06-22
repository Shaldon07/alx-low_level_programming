#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, following a new line.
 * @separator: string to be printed between strings.
 * @n: amount of strings passed to the function.
 * @...: variable number of strings to be printed.
 * Description: if separator is NULL, it is not printed.
 * if one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int idx;

	va_start(strings, n);

	for (idx = 0; idx < n; idx++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
