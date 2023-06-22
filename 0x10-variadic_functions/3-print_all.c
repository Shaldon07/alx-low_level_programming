#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of different arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *sp = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sp, s);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(l);
}
