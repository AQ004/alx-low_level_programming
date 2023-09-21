#include "main.h"

/**
 * print_number - void function
 * @n: integer number
 *
 * Description: function that prints an integer.
 */

void print_number(int n)
{
	int number;

	number = n;
	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}
	if (number / 10 != 0)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
