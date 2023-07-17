#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function prints stuct dog details
 * @d: the struct data
 */

void print_dog(struct dog *d)
{
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
