#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: cheked if it's a digit or not
 *
 * Return: 1 if digit, 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
