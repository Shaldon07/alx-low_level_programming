#include "main.h"

/**
 * _isdigit - checks for a digit between 0 and 9
 * @c: integer that needs to be checked
 * Return: 1 when c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
