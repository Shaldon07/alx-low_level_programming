#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character that must be printed
 * Return: 1 when sucessful
 * -1 on error and errno is set appropritely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
