#include "main.h"

/**
 * string_toupper - function that returns array of char
 * @str: array of characters
 *
 * Description: function that changes all lowercase letters of
 *	a string to uppercase
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
	}
	return (str);
}

