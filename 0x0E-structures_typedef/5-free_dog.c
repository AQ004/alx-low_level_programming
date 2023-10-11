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
		if (d->name != 0)
			free(d);
		if (d->owner != NULL)
			free(d->name), free(d);
	}
}

