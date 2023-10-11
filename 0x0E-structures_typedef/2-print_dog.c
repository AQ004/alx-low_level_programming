#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: Struct Dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		print("Name: %s\nAge: %f\nOwner: %s", d->name ? d->name : "(nul)", (*p).age,
				(*d).owner ? d->owner : "(nul)");
	}
}

