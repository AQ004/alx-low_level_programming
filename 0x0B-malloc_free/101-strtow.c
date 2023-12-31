#include "main.h"

/**
 * word_counter - function counts the number of words in a sentence.
 * @s: sentence
 *
 * Return: number of words + null terminate
 */

int word_counter(char *s)
{
	int i, words = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				words++;
		}
		else if (i == 0)
			words++;
	}
	words++;
	return (words);
}

/**
 * strtow - function takes a sentence and breaks it into separate words.
 * @str: sentence
 *
 * Return: pointer to pointer char.
 */

char **strtow(char *str)
{
	int i = 0, j, k, char_coloumn, words = 0, word_row = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_counter(str);
	if (words == 1)
		return (NULL);
	ptr = (char **) malloc(words * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[words - 1] = NULL;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			/* j = word_chars or strlen(word) */
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			ptr[word_row] = (char *)malloc((j + 1) * sizeof(char));
			if (ptr[word_row] == NULL)
			{
				for (k = 0; k < word_row; k++)
					free(ptr[k]);
				free(ptr[words - 1]);
				free(ptr);
				return (NULL);
			}
			for (char_coloumn = 0; char_coloumn < j; char_coloumn++)
				ptr[word_row][char_coloumn] = str[i + char_coloumn];
			ptr[word_row][char_coloumn] = '\0';
			word_row++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}

