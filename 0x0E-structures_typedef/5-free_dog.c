#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free dogs
 * @d: dog_t type paramater
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
