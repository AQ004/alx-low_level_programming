#include "lists.h"

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
	/* it works */
	struct Node* newNode = malloc(sizeof(struct Node));
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

