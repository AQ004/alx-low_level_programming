#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: first node
 */

void free_list(list_t *head)
{
	if (head)
	{
		if (head->str)
			free(head->str);
		free_list(head->next);
		free(head);
	}
}

