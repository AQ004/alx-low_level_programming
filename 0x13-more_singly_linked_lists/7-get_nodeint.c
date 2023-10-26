#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of nodes.
 * @index: index of the node, starting at 0.
 *
 * Return: nth node
 *	if the node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;

	while (head)
	{
		if (currentIndex == index)
			return (head);
		head = head->next;
		currentIndex++;
	}
	return (NULL);
}

