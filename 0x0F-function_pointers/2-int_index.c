#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of char
 * @size: size of array
 * @cmp: funcion pointer
 *
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
}

