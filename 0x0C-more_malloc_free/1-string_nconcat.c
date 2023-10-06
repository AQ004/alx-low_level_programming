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

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * n: number of bytes
 *
 * Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_strlen;
	char *str;

	str = malloc(sizeof(s1) + n);
	if (str == NULL)
		return (NULL);
	for (s1_strlen = 0; s1[s1_strlen] != '\0'; s1_strlen++)
		;
	_strncpy(str, s1, s1_strlen);
	_strncpy(str + s1_strlen, s2, n);
	return (str);
}

