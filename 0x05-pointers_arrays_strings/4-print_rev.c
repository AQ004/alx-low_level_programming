#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 * @s: array of characters
 */

void print_rev(char *s)
{
	int length, j;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (j = --length; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
