#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads the text file print to STDOUT.
 * @filename: text file that is being read
 * @letters: amount of letters to be read
 * Return: y- actual amount of bytes read and print
 * 0 when function fails or if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	z = read(x, buffer, letters);
	y = write(STDOUT_FILENO, buf, z);

	free(buffer);
	close(x);
	return (y);
}
