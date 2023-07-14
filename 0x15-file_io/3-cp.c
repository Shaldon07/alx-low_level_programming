#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - assigns 1024 bytes for a buffer.
 * @file: name of the file buffer is reserving chars for.
 * Return: A pointer that points to the newly-assigned buffer.
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - shuts file descriptors.
 * @fd: The file descriptor to be shut.
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 when success.
 * Description: If the argument count is incorrect - exit code 97.
 *              when file_from doesn't exist or can't be read - exit code 98.
 *              when file_to can't be created or written to - exit code 99.
 *              when file_to or file_from can't be shut - exit code 100.
 */

int main(int argc, char *argv[])
{
	int fm, y, z, a;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	fm = open(argv[1], O_RDONLY);
	z = read(fm, buf, 1024);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fm == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		a = write(y, buf, z);
		if (y == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		z = read(fm, buf, 1024);
		y = open(argv[2], O_WRONLY | O_APPEND);

	} while (z > 0);

	free(buf);
	close_file(fm);
	close_file(y);

	return (0);
}
