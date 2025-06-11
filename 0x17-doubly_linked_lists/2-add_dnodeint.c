#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - fn that adds a new node at the beginning
 * @head: head of the dll
 * @n: value of the new linked list
 * Return: address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = t;
	new->prev = NULL;

	if (t != NULL)
		t->prev = new;
	*head = new;
	return (new);
}
