#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: array of integers
 * @n: is the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
