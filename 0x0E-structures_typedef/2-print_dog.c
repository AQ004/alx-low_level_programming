#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: Struct Dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nul)", (*d).age,
				(*d).owner ? d->owner : "(nul)");
	}
}

