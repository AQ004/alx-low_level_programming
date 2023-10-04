#include "main.h"

/**
 * create_array - function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: size of array of char
 * @c: char
 *
 * Return: ptr or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	(void)c;
	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
	free(ptr);
}

