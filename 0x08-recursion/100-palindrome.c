#include "main.h"

int _strlen_recursion(char *s);
int checks_palindrome(char *s, int i, int ln);

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to reverse
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (checks_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - gives back length of string
 * @s: string to calculate the length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checks_palindrome - checks recursiveness in characters for palindrome
 * @s: string that's checked
 * @i: iterator
 * @ln: lenght of string
 * Return: 1 when palindrome and 0 if not
 */

int checks_palindrome(char *s, int i, int ln)
{
	if (*(s + i) != *(s + ln - 1))
	{
		return (0);
	}
	if (i >= ln)
	{
		return (1);
	}
	return (checks_palindrome(s, i + 1, ln - 1));
}
