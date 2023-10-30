#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to char
 *
 * Return: length of the array
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	return (counter);
}


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
	if (!text_content)
		n = write(file, text_content, _strlen(text_content));
	else
		n = 0;

	/* Check if write was successful */
	if (n == -1 || n != strlen(text_content))
		n = -1;

	/* Close the file */
	close(file);

	return (n == -1 ? -1 : 1);
}

