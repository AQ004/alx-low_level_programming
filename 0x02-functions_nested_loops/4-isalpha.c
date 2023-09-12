#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: is an input
 *
 * Return: 0 if not alphabetic , 1 if alphabetic
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
