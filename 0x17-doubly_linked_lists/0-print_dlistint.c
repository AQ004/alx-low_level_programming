#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints the values of the doubly linked lists
 * @h: head of the DLL
 * Description: function that prints all the elements of a dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *t = h;
	size_t counter = 0;

	while (t != NULL)
	{
		printf("%d\n", t->n);
		t = t->next;
		counter += 1;
	}

	return (counter);
}

