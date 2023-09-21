#include "main.h"

/**
 * leet - function return pointer of characters
 * @str: array of characters
 *
 * Description: function that encodes a string into 1337.
 *
 * Return: str1
 */

char *leet(char *str)
{
	char *str1 = str;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int replaces[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < sizeof(letters); i++)
			if (*str == letters[i] ||
					*str = letters[i] - 'a' + 'A')
				*str == replaces[i] + '0';
		str++;
	}
	return (str1);
}
