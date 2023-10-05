#include "main.h"

/**
 * word_count - wra
 * @s: waw
 *
 * Return: awd
 */

int word_count(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ' && (s[i + 1] != ' ' && s[i + 1] != '\0'))
			counter++;
		else if (i == 0)
			counter++;
	}
	counter++;
	return (counter);
}

/**
 * strtow - wra
 * @str: waw
 *
 * Return: awd
 */

char **strtow(char *str)
{
	int i, j, k, len, n = 0, wordchar = 0;
	char **str1;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = word_count(str);
	if (n == 1)
		return (NULL);
	str1 = (char **) malloc(n * sizeof(char *));
	if (str1 == NULL)
		return (NULL);
	str1[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			str1[wordchar] = (char *)malloc(j);
			j--;
			if (str1[wordchar] == NULL)
			{
				for (k = 0; k < wordchar; k++)
					free(str1[k]);
				free(str1[n - 1]);
				free(str1);
				return (NULL);
			}
			for (len = 0; len < j; len++)
				str1[wordchar][len] = str[i + len];
			str1[wordchar][len] = '\0';
			wordchar++;
			i += j;
		}
		else
			i++;
	}
	return (str1);
}
