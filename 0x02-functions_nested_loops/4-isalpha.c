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
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
