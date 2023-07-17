#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function initializes data structure
 * @d: struct variale name
 * @name: name of the dog
 * @age: age of the dog char
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !+ NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
