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
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');
	return (dest);
}

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
 * _strdup - function that returns a pointer
 *		to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 * @str: pointer to char
 *
 * Return: ptr or NULL
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (char *) malloc(_strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	_strcpy(ptr, str);
	return (ptr);
}

