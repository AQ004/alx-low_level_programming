#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		goto x;
	else
		for (i = 0; i < n; i++)
			_putchar('_');
x:
	_putchar('\n');
}
