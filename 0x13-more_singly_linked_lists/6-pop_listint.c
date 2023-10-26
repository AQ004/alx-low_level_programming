#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the nodes
 *
 * Return: the head node’s data (n).
 *	if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n_data;

	if (*head == 0)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	n_data = tmp->n;
	free(tmp);
	return (n_data);
}

