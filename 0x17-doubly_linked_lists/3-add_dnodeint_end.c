#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at end
 * @head: pointer to pointer to head of the ll
 * @n: value
 * Description: function that adds a new node at the end of a dlistint_t list
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (t == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (t->next != NULL)
		{
			t = t->next;
		}

		new->prev = t;
		t->next = new;
	}

	return (new);
}
