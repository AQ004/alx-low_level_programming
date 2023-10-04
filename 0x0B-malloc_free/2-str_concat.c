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

	/* if null is passed, treat it as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcpy(ptr + strlen(s1), s2);

	return (ptr);
}

