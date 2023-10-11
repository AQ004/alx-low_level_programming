#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * stringCopyFunc - Function copies a string
 * @dest: Destination
 * @src: Source
 *
 * Return: destination
 */

char *stringCopyFunc(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog.
 * @age: age of the new Dog.
 * @owner: owner of that dog
 *
 * Return: Dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *Dog;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	i++, j++;
	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		return (NULL);

	(*Dog).name = malloc(sizeof(char) * i);
	if (Dog->name == NULL)
	{
		free(Dog);
		return (NULL);
	}

	(*Dog).owner = malloc(sizeof(char) * j);
	if (Dog->owner == NULL)
	{
		free(Dog), free(Dog->name);
		return (NULL);
	}
	stringCopyFunc(Dog->name, name);
	stringCopyFunc(Dog->owner, owner);
	(*Dog).age = age;
	return (Dog);
}

