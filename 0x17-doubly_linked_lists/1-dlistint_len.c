#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a dlistint_t
 * @h: the head of the dll
 * Description: it returns number of elements in dll
 * Return: no. of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *t = h;
	size_t count = 0;

	while (t != NULL)
	{
		t = t->next;
		count++;
	}
	return (count);
}
