#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * @...: the numbers
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list va_i;

	if (n == 0)
		return (0);
	va_start(va_i, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va_i, int);
	}
	va_end(va_i);
	return (sum);
}

