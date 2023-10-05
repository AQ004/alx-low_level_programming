#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to char
 *
 * Return: length of the array
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	return (counter);
}

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: array of src pasted in this array
 * @src: array of chars coppied from it to the another array
 *
 * Return: dest array
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');
	return (dest);
}

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 *
 * Return: (str) or (null) if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, indexNL = 0, total_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calc. the total_length of the argv + '\n' */
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* indexNL stand for indexForTheNewLine */
	for (i = 0; i < ac; i++, indexNL++)
	{
		/* To copy the index, add \n and repeat */
		strcpy(str + indexNL, av[i]);
		indexNL += strlen(av[i]);
		str[indexNL] = '\n';
	}
	str[total_length] = '\0';
	return (str);
}

