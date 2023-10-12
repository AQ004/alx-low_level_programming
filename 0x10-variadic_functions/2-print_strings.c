#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed "\n"
 * @separator: string to be printed between the strings
 * @n: no. of args.
 * @...: args.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *str;

	if (separator == NULL)
		printf("");

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(x, char*) ? va_arg(x, char*) : "(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

