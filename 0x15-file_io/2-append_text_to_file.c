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
 * append_text_to_file - appends text at the end of a file.
 * @filename: asd
 * @text_content: asd
 *
 * Return: asd
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	ssize_t n = 0;
	ssize_t len = 0;

	if (!filename)
		return (-1);
	fileD = open(filename, O_WRONLY | O_APPEND);
	if (fileD == -1)
		return (-1);
	if (text_content)
	{
		len = _strlen(text_content);
		n = write(fileD, text_content, len);
	}
	close(fileD);
	return (n == len ? 1 : -1);
}

