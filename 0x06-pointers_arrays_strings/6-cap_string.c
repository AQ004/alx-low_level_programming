#include "main.h"
#include <ctype.h>

/**
 * cap_string - function returns char array
 * @str: array of char
 * Return: str1
 */

char *cap_string(char *str)
{
	char *str1 = str;
	int i, foundSep = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (*str)
	{

		for (i = 0; i < 13; i++)
		{
			if (*str == separators[i])
				foundSep = 1;
		}
		if (islower(*str) && foundSep)
		{
			*str -= 'a' - 'A';
			foundSep = 0;
		}
		else
			foundSep = 0;
		str++;
	}
	return (str1);
}
