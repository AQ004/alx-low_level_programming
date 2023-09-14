#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number that will printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	if (n / 10 > 0)
		print_number(n / 10); /* Recursion */
	_putchar(n % 10 + '0');
}
