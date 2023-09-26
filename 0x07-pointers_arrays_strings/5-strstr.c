#include "main.h"

/**
 * _strstr - char function
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: haystack+i_1
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	for (i = 0; haystack[i] > '\0'; i++)
	{
		/* it iterates to */
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
			if (haystack[j] != needle[j - i])
				break;
		if (needle[j - i] == '\0')
			return (haystack + i);
	}
	return (0);
}

