#include "main.h"

/**
 * create_file - creates a file.
 * @filename: A pointer that points to the
 * name of the file to create.
 * @text_content: A pointer that points
 * to a string to write to the file.
 * Return: when function fails -1, when sucessful 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (y = 0; text_content[y];)
			y++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, y);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
