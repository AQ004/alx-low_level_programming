#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 2));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;
	arr[j] = '\0';
	return (arr);
}

