#include "main.h"

/**
 * compareBet - int function
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 1 _ 0
 */

int compareBet(char *haystack, char *needle)
{
	/* if equal return 1 */
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	return (1);
}

/**
 * _strstr - char pointer func
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: haystack _ 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compareBet(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (0);
}

