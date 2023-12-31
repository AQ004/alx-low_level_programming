#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the head of the node
 *
 * Description: The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;

	/**
	 * if (*head)
	 * {
	 * free_listint2(&(*head)->next);
	 * free(*head);
	 * }
	 * *head = NULL;
	 */
}

