#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: asd
 * @text_content: asd
 *
 * Return: asd
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	/* Open the file */
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	/* Write to the file */
	n = (text_content != NULL) ?
		write(file, text_content, strlen(text_content)) : 0;

	/* Check if write was successful */
	if (n == -1 || n != strlen(text_content))
		n = -1;

	/* Close the file */
	close(file);

	return (n == -1 ? -1 : 1);
}

