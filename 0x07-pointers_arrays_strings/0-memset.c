#include "main.h"

/**
 * _memset - returns pointer to char
 * @s: pointer to array
 * @b: const char
 * @n: first n bytes of memory that will be changes
 *
 * Description: function that fills memory with a constant byte.
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

