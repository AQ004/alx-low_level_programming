#include "main.h"

/**
 * wildcmp - function that compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: 1 if identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == *s2 + 1)
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2));
	}

	if ((*s1 == '\0' && *s2 != '\0') ||
			(*s1 != '\0' && *s2 == '\0'))
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
