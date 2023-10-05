#include "main.h"

/**
 * counter_words - function that count words
 * @str: arr str
 *
 * Return: counter
 */

int counter_words(char *str)
{
	int counter = 0;
	int isword = 0;

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && !isword)
		{
			counter++;
			isword = 1;
		}
		else
			isword = 0;
	return (counter);
}

/**
 * strtow - function that splits a string into words.
 * @str: arr str
 *
 * Return: words_NULL
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = counter_words(str);
	char **words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	int wrd_index = 0;
	int wrd_length = 0;
	int isword = 0;

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ')
		{
			if (!isword)
			{
				wrd_length = 1;
				isword = 1;
			}
			else
				wrd_length++;
		}
		else if (isword)
		{
			words[wrd_index] = malloc((wrd_length + 1) * sizeof(char));
			if (words[wrd_index] == NULL)
			{
				for (int j = 0; j < wrd_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			strncpy(words[wrd_index], str + i - wrd_length, wrd_length);
			words[wrd_index][wrd_length] = '\0';
			wrd_index++;
			isword = 0;
		}
	if (isword)
	{
		words[wrd_index] = malloc((wrd_length + 1) * sizeof(char));
		if (words[wrd_index] == NULL)
		{
			for (int j = 0; j < wrd_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		strncpy(words[wrd_index], str + strlen(str) - wrd_length, wrd_length);
		words[wrd_index][wrd_length] = '\0';
		wrd_index++;
	}
	words[wrd_index] = NULL;
	return (words);
}

