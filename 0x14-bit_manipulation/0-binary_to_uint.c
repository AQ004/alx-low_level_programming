#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 *	or 0 if there is one or more chars in the string b that isnt 0 or 1
 *		b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != 0 & *b != 1)
			return (0);
		result = *b - '0' + 2 * result;
		b++;
	}
	return (result);
}

