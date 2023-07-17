#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function prints stuct dog details
 * @d: the struct data
 */

void print_dog(struct dog *d)
{
	if ((*d).name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL || d->owner[0] == '\0')
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
