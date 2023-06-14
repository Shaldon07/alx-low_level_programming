#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: integer input
 * @av: double pointer array
 * Return: 0 when succesful
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, L = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			L++;
	}
	L += ac;

	s = malloc(sizeof(char) * L + 1);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		if (s[z] == '\0')
		{
			s[z++] = '\n';
		}
	}
	return (s);
}
