#include "main.h"

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
	char *str;
	str = malloc(sizeof(s1) + n);
	if (str == NULL)
		return (NULL);

}

