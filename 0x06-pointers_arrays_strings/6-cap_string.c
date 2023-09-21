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
	char separators[] = " \t\n;,.!?\"(){}";
	int i;

	while (*str)
	{
		for (i = 0; i < 13; i++)
		{
			if (*str == separators[i] && islower(*(str + 1)))
				*(str+1) -= ('a' - 'A');
		}
		str++;
	}
		return (str1);
}
