#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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
	dogy->name = name;
	dogy->age = age;
	dogy->owner = owner;

	return (dogy);
}