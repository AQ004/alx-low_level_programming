#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, \n
 * @separator: string to be printed between numbers.
 * @n: no. of args
 * ...: args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}

