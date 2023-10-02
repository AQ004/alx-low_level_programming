#include "main.h"

/**
 * _strncat - The _strncat function is similar to the
 *	_strcat function, except that
 *	it will use at most n bytes from src; and
 *	src does not need to be null-terminated if it
 *	contains n or more bytes
 *
 * @dest: array of char
 * @src: array of char
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && *src && j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
