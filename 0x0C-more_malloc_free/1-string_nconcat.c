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
 * @n: number of bytes
 *
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_strlen, s2_strlen;
	char *str;

	for (s1_strlen = 0; s1[s1_strlen] != '\0'; s1_strlen++)
		;
	for (s2_strlen = 0; s2[s2_strlen] != '\0'; s2_strlen++)
		;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_strlen)
		str = s2;
	str = malloc(s1_strlen + 1 + n);
	if (str == NULL)
		return (NULL);
	_strncpy(str, s1, s1_strlen);
	_strncpy(str + s1_strlen, s2, n);
	str[s1_strlen + n] = '\0';
	return (str);
}

