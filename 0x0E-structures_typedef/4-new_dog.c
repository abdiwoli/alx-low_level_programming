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
	{	free(owner);
		return (NULL);
	}

	if (name && owner)
	{
		dogy->name = strdup(name);
		dogy->owner = strdup(owner);
		dogy->age = age;
		if (!dogy->name && !dogy->owner)
		{
			free(dogy->name);
			free(dogy->owner);
			free(dogy);
			return (NULL);
		}
		return (dogy);
	}
	else
	{
		free(dogy);
		return (NULL);
	}
}
