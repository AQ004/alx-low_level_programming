#include "main.h"

/**
 * print_diagsums - void
 * @a: int array
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i];
		diag2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, %d\n", diag1, diag2);
}

