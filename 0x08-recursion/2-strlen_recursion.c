#include "main.h"

/**
 * _strlen_recursion - function that prints a string in reverse.
 * @s: char array.
 *
 * Return: length of characters
 */

int _strlen_recursion(char *s)
{
	int x = 1;

	if (*s == '\0')		/* Breaking point */
		return (0);
	if (*s)
		x = x + _strlen_recursion(s + 1);
	return (x);
}

