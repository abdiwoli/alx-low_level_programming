#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - function create new details of dog
 * @name: name of the dog
 * @age: age of the dog float
 * @owner: the owner of the dog
 * Return: new dog details
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy = malloc(sizeof(dog_t));

	if (!dogy)
		return (NULL);
	dogy->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!dogy->name)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!dogy->owner)
	{
		free(dogy);
		return (NULL);
	}
	dogy->name = strcpy(dogy->name, name);
	dogy->owner = strcpy(dogy->owner, owner);
	dogy->age = age;

	return (dogy);
}
