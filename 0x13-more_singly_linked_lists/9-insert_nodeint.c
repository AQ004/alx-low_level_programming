#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double ptr to the head of nodes
 * @idx: index of the list where the new node should be added. starts at 0
 * @n: value of new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	/* else */
	current = *head;
	for (; (i + 1) < idx; i++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}

	new->next = current->next;
	current->next = new;
	return (new);
}

