#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: ptr1 _ 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr1;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				ptr1 = &s[i];
				return (ptr1);
			}
		}
	}
	return (0);
}

