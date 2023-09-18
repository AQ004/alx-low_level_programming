#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: array of src pasted in this array
 * @src: array of chars coppied from it to the another array
 *
 * Return: dest array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	dest[i] = src[i];
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
