#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: integer number
 *
 * Return: remainder of the number divided by 10
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
