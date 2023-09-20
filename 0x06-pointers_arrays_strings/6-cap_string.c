#include "main.h"

/**
 * _islower - function that takes
 * @c: eeeeefaf
 * Description: awefwfawer eif wieh wef
 * Return: aefrf
 */
int _islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * cap_string - function returns char array
 * @str: array of char
 * Return: str1
 */

char *cap_string(char *str)
{
	char *str1 = str;
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	while (*str)
	{
x:
		for (i = 0; i < 13; i++)
		{
			if (*str == separators[i] && _islower(*(str + 1)))
				*++str -= ('a' - 'A');
		}
		str++;
		if (*str != '\0')
			goto x;
	}
		return (str1);
}
