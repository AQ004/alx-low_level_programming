#include "main.h"

/**
 * move_star - rt
 * @s2: asd
 * Return: tuy
 */

char *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2 + 1));
	return (s2);
}

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
		if (!*s1 && !*move_star(s2))
			return (1);
		if (*s1 == '\0')
			return (0);
		if (*s2 + 1 != *s1)
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if ((*s1 == '\0' && *s2 != '\0') ||
			(*s1 != '\0' && *s2 == '\0'))
		return (0);
	if (*s1 != *s2)
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}

