#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: old size of bytes
 * @new_size: new size of bytes
 *
 * Return: str
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
	{
		str = malloc(new_size);
		if (str == 0)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == 0)
		return (NULL);
	/*	strcpy(str, ptr) But Without NULL terminator	*/
	for (i = 0; i < old_size && i < new_size; i++)
		str[i] = ((char *)ptr)[i];
	free(ptr);
	return (str);
}

