#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer that points
 * to the name of the file.
 * @text_content: string that is added to the end of the file.
 * Return: -1 when function fails or filename is NULL and
 * -1 when the file does not exist the user lacks write permissions,
 * 1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, l);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
