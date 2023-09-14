#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number that will printed
 */

void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		num = -1 * num;
		_putchar('-');
	}
	if (num / 10 > 0)
		print_number(num / 10); /* Recursion */
	_putchar(num % 10 + '0');
}
