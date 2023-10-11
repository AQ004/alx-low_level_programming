#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: Struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d);
		if (d->owner)
			free(d->name), free(d);
	}
}

