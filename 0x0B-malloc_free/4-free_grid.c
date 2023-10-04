#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional
 *		grid previously created function
 * @grid: 2d array
 * @height: rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		/* to free the rows */
		free(grid[i]);
	free(grid);
}

