#include "main.h"

/**
 * word_count - function counts the number of words in a sentence.
 * @s: sentence
 *
 * Return: number of words + null terminate
 */

int word_counter(char *s)
{
	int i, words = 0;
	/* i iterates to each char */
	for (i = 0; s[i]; i++)
	{
		/* checks if the current character is a space, it looks at the next character. */
		/* If the next character is not a space and not the end of the sentence, */
		/* it means we've found a new word. */
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				words++;
		}
		/* If the current character is not a space, and it's the first character in the sentence, */
		/* it also means we've found a new word */
		else if (i == 0)
			words++;
	}
	/* After checking all the characters, it adds 1 again to count '/0' */
	/* (Null Terminated) */
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

	/* If the sentence is empty or doesn't exist, it returns nothing. */
	if (str == NULL || *str == '\0')
		return (NULL);

	words = word_counter(str);
	if (words == 1)
		return (NULL);

	/* list of empty words, with one empty word for each word in the sentence. */
	ptr = (char **) malloc(words * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[words - 1] = NULL;

	/* It then goes through the sentence again, this time breaking it up into words. */
	while (str[i])
	{
		/* It checking if it's not a space and if */
		/* the previous character is ' ' or it's the first character in the string. */
		/* If it is, it knows that it's the start of a new word, */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			/* j = word_chars or strlen(word) */
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			/* creating a new string for the word and copying the characters */
			/* keeping doing this until it has gone through all the words in the string. */
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

