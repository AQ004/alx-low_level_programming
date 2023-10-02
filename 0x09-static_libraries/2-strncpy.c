#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: array of char
 * @src: array of char
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/* if n > src */
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
