#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to char
 *
 * Return: length of the array
 */

int _strlen(const char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	return (counter);
}

/**
 * add_node - function that adds a new node
 *		at the beginning of a list_t list.
 * @head: list_t
 * @str: string
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == 0)
		return (NULL);
	newNode->str = strdup(str);
	/* newNode->str = malloc(strlen(str) + 1); */
	if (newNode->str == 0)
	{
		free(newNode);
		return (NULL);
	}
	/* strcpy(newNode->str, str); */
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

