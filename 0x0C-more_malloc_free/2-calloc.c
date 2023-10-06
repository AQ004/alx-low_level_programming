#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of bytes.
 * @size: size of data type.
 *
 * Return: str.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;
	return (str);
}

