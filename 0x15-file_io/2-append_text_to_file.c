#include "main.h"

/**
 * append_text_to_file - appends text that is at
 * the end of a file.
 * @filename: A pointer that points to the name of the file.
 * @text_content: string to be added that is
 * at the end of the file.
 * Return: when function fails or filename is NULL -1.
 *         when file does not exist the user lacks write permissions -1.
 *         otherwise when sucessful 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
