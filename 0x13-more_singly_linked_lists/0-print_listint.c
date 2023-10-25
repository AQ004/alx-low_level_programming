#include "lists.h"

/**
 * print_listint - function that prints all the
 *		elements of a listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t x;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}

