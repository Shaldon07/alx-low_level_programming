#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints to STDOUT.
 * @filename: text file to be read
 * @letters: amount of letters to be read
 * Return: w- actual amount of bytes read and print
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	y = read(fd, bf, letters);
	x = write(STDOUT_FILENO, bf, y);

	free(bf);
	close(fd);
	return (x);
}
