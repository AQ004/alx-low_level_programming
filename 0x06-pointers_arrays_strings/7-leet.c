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
	char letters[] = "aeotl";
	char replaces[] = "43071";
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(letters) - 1; i++)
			if (*str == letters[i] || *str == letters[i] - 'a' + 'A')
				*str = replaces[i];
		str++;
	}
	return (str1);
}

