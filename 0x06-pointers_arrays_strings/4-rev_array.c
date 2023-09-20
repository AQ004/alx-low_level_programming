#include "main.h"

/**
 * reverse_array - void function.
 * @a: array of integers.
 * @n: number of elements of the array.
 *
 * Description: function that reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		a[i] += a[n - 1 - i];
		a[n - 1 - i] = a[i] - a[n - 1 - i];
		a[i] -= a[n - 1 - i];
	}
}
