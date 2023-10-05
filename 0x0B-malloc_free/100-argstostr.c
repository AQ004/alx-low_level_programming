#include "main.h"

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

	str = malloc(total_length * sizeof(char));
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

