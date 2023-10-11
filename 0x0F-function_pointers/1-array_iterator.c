#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 *			on each element of an array.
 * @array: array of integers.
 * @size: size of the given array.
 * @action: pointer to void function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

