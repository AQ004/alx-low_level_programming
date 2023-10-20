#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: first node
 * @str: string
 *
 * Return: newNode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == 0)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == 0)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	list_t *Current = *head;

	for (; Current->next != NULL; Current = Current->next)
		;
	Current->next = newNode;
	return (newNode);
}

