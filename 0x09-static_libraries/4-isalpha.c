#include "main.h"

/**
 * _isalpha - checks if alphabetic character is presence
 * @c: character to be checked
 * Return: 1 when c is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
