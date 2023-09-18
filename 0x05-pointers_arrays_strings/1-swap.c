#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first input
 * @b: second input
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
