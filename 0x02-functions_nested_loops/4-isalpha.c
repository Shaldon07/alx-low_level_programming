#include "main.h"
/**
 * _isalpha - function that checks for alphabet
 * @c: checks parameter
 * Return: 1 if it's an alphabet and o if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
