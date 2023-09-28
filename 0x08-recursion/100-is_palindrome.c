#include "main.h"
#include <string.h>

/**
 * palindrome - function that returns 1 if a string is
 *		a palindrome and 0 if not.
 * @s: pointer to first char.
 * @lastCh: pointer to last char.
 *
 * Return: if palindrome return (1), otherwise (0).
 */

int palindrome(char *s, char *lastCh)
{
	if (s == lastCh)
		return (1);
	if (*s != *lastCh)
		return (0);
	if (*s == *lastCh)
		return (palindrome(s + 1, lastCh - 1));
}

/**
 * is_palindrome - function that returns 1 if a string is
 *              a palindrome and 0 if not.
 * @s: char array.
 *
 * Return: palindrome function
 */

int is_palindrome(char *s)
{
	char *lastCh = s + strlen(s) - 1;

	return (palindrome(s, lastCh));
}

