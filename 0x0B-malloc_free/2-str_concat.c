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
 * str_concat - function that concatenates two strings.
 * @s1: char arr
 * @s2: char arr
 *
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	/* if null is passed, treat it as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *) malloc(_strlen(s1) + _strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	_strcpy(ptr, s1);
	_strcpy(ptr + strlen(s1), s2);
	/* or strcat(ptr, s2); to concatenate  */
	return (ptr);
}

