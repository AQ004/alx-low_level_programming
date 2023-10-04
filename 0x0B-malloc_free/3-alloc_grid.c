#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 *		to a 2 dimensional array of integers
 * @width: coloumns
 * @height: rows
 *
 * Return: ptr _ NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* memory allocation for rows of the array */
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* memory allocation for columns of each row */
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			/*	free any memory previously allocated	*/
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

