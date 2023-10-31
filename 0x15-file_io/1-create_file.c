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
	ssize_t n = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);
	/* open the file */
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (length)
		n = write(file, text_content, length);
	close(file);
	return (n == length ? 1 : -1);
}

