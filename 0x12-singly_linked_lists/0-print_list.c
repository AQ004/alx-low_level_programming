#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list
 *
 * Return: size_t type
 */

size_t print_list(const list_t *h)
{
	size_t Counter = 0;

	while (h)
	{
		if (h == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*h).len, h->str);
		Counter++;
		h = h->next;
	}
	return (Counter);
}

