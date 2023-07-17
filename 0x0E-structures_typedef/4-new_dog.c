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

	if (!dogy)
		return (NULL);
	if (name == NULL)
	{
		free(dogy);
		free(name);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(dogy);
		free(name);
		return (NULL);
	}
	dogy->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!dogy->name)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!dogy->owner)
	{
		free(dogy->owner);
		free(dogy);
		return (NULL);
	}
	strcpy(dogy->name, name);
	strcpy(dogy->owner, owner);
	dogy->age = age;

	return (dogy);
}
