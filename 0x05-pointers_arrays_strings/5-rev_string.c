#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: array of characters
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i / 2; j++)
	{
		/*	swap	*/
		s[i - 1 - j] += s[j];
		s[j] = s[i - 1 - j] - s[j];
		s[i - 1 - j] -= s[j];
	}
}
