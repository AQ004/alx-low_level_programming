#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog.
 * @age: age of the new Dog.
 * @owner: owner of that dog
 *
 * Return: no return
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
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
}

