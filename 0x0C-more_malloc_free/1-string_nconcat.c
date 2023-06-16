#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - integrates n bytes of string to another
 * @s1: string to add to
 * @s2: string to integrate from
 * @n: number of bytes from s2 to integrate to s1
 * Return: the pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x = 0. y = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		p = malloc(sizeof(char) * (ln1 + n + 1));
	else
		p = malloc(sizeof(char) * (ln1 + ln2 + 1))

	if (!p)
		return (NULL);

	while (x < ln1)
	{
		p[x] = s1[x];
		x++;
	}

	while (n < ln2 && x < (ln1 + n))
		s[x++] = s2[y++];

	while (n < ln2 && x < (ln1 + ln2))
		s[x++] = s2[y++];

	p[x] = '\0';
	return (p);
}
