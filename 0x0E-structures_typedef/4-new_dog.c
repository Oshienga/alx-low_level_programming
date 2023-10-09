#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - dog instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_doggo = malloc(sizeof(dog_t));

	if (new_doggo == NULL)
		return (NULL);

	new_doggo->name = strdup(name);
	if (new_doggo->name == NULL)
	{
		free(new_doggo);
		return (NULL);
	}

	new_doggo->age = age;

	new_doggo->owner = strdup(owner);
	if (new_doggo->owner == NULL)
	{
		free(new_doggo->name);
		free(new_doggo);
		return (NULL);
	}

	return (new_doggo);
}
