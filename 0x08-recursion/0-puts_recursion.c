#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: char array
 */

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}

