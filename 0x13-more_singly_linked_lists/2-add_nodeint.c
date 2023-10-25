#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list.
 * @n: the integer value for the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_ptr = malloc(sizeof(listint_t));

	if (New_ptr == NULL)
		return (NULL);
	New_ptr->n = n;
	New_ptr->next = *head;
	*head = New_ptr;
	return (New_ptr);
}

