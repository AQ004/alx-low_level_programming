#include "main.h"

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
	unsigned int s1_strlen, s2_strlen, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_strlen = 0; s1[s1_strlen] != '\0'; s1_strlen++)
		;
	for (s2_strlen = 0; s2[s2_strlen] != '\0'; s2_strlen++)
		;

	if (n > s2_strlen)
		n = s2_strlen;
	str = malloc(s1_strlen + 1 + n);
	if (str == NULL)
		return (NULL);
	/*_strncpy(str, s1, s1_strlen);*/
	/*_strncpy(str + s1_strlen, s2, n);*/
	for (i = 0; i < s1_strlen; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[s1_strlen + i] = s2[i];
	str[s1_strlen + n] = '\0';
	return (str);
}

