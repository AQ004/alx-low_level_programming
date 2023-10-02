#include "main.h"

/**
 * _strcmp - function returns integer, takes two inputs
 * @s1: string 1
 * @s2: string 2
 *
 * Description: function that compares two strings.
 *
 * Return: i
 */

int _strcmp(char *s1, char *s2)
{
	int Comparison = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			Comparison = (int)*s1 - (int)*s2;
			break;
		}
		s1++;
		s2++;
	}
	return (Comparison);
}

