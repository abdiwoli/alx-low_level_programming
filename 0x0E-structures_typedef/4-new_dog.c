#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * new_dog - function create new details of dog
 * @name: name of the dog
 * @age: age of the dog float
 * @owner: the owner of the dog
 * Return: new dog details pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy = malloc(sizeof(dog_t));

	if (dogy == NULL)
	{
		free(name);
		free(owner);
		return (NULL);
	}

	dogy->name = NULL;
	dogy->owner = NULL;
	dogy->age = age;

	if (name != NULL)
	{
		dogy->name = strdup(name);
		if (dogy->name == NULL)
		{
			free(dogy);
			free(owner);
			return (NULL);
		}
	}

	if (owner != NULL)
	{
		dogy->owner = strdup(owner);
		if (dogy->owner == NULL)
		{
			free(dogy->name);
			free(dogy);
			free(name);
			return (NULL);
		}
	}

	return (dogy);
}
