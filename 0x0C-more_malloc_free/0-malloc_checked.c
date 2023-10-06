#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of bytes.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
}

