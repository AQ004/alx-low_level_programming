#include "lists.h"

/**
 * list_len - function that returns the number
 *		of elements in a linked list_t list.
 * @h: struct Node
 *
 * Return: number of Elements
 */

size_t list_len(const list_t *h)
{
	size_t Counter = 0;

	while (h)
		Counter++, h = h->next;
	return (Counter);
}

