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
		n = -1 * (n % 10);
	else
		n = n % 10;
	_putchar(n + '0');
	return (n);
}
