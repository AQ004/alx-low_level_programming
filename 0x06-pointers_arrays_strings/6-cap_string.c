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

		if (1)
			for (i = 0; i < 13; i++)
			{
				if (*str == separators[i])
					foundSep = 1;
			}
		else if (islower(*str) && foundSep)
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
