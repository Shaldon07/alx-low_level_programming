#include "main.h"
#include <stdlib.h>

/**
 * word_count - function that helps to count
 * the number of words in a string
 * @s: string that will be evaluated
 * Return: number of words that were counted
 */

int word_count(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}

	return (y);
}

/**
 * **strtow - splits up a string into words
 * @str:string to split
 * Return: pointer to an array of strings when sucessful
 * and NULL when error
 */
char **strtow(char *str)
{

	char **matrix, *tmp;
	int x, y, z, ln = 0, wrds, start, end;

	while (*(str + ln))
		ln++;

	wrds = word_count(str);
	if (wrds == 0)
		return (NULL);

	for (x = 0; x <= ln; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix = tmp - z;
				y++;
				z = 0;
			}
		}
	else if (z++ == 0)
		start = x;
	}
	matrix[y] = NULL;
	return (matrix);
}
