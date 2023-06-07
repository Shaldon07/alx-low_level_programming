#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the component of c into stdout
 * @c: The character that needs to be printed
 * Return: 1 when sucessful;
 * -1 is returned on error and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
