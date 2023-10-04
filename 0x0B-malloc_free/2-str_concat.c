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
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(1);
		*ptr = '\0';
	}
	else if (s1 == NULL)
	{
		ptr = malloc(strlen(s2) + 1);
		strcpy(ptr, s2);
	}
	else if (s2 == NULL)
	{
		ptr = malloc(strlen(s1) + 1);
		strcpy(ptr, s1);
	}
	else
	{
		ptr = (char *) malloc(strlen(s1) + strlen(s2) + 1);
		strcpy(ptr, s1);
		strcpy(ptr + strlen(s1), s2);
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

