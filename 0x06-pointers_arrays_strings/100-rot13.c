#include "main.h"

/**
 * rot13 - function that returns pointer to char
 * @str: pointer to character
 *
 * Description: function that encodes a string using rot13
 *
 * Return: str1
 */

char *rot13(char *str)
{
	char *str1 = str;
	char alphabetic[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*str)
	{
		for (i = 0; i < 26 * 2; i++)
			if (*str == alphabetic[i])
			{
				*str = rot13[i];
				break;
			}
		str++;
	}
	return (str1);
}
