#include "main.h"

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
	ptr = (char *) malloc(strlen(str));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
}

