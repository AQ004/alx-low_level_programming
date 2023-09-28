#include "main.h"
int wildcmp(char *s1, char *s2);

/**
 * move_star - return pointer to char.
 * @s2: string 2.
 * Return: s2.
 */

char *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2 + 1));
	return (s2);
}

/**
 * _inception - int function
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: x
 */

int _inception(char *s1, char *s2)
{
	int x = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		x += wildcmp(s1 + 1, s2 + 1);
	x += _inception(s1 + 1, s2);
	return (x);
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
	int x = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (*s1 == '\0' || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_star(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			x += wildcmp(s1 + 1, s2 + 1);
		x += _inception(s1, s2);
		return (!!x);
	}
	return (0);
}
