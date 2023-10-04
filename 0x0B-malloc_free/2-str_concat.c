#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: char arr
 * @s2: char arr
 *
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *ptr = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	for (i = strlen(s1); i <= strlen(s1) + strlen(s2); i++)
		ptr[i] = s2[i - strlen(s1)];
	return (ptr);
}

