#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function prints stuct dog details
 * @d: the struct data
 */

void print_dog(struct dog *d)
{
	printf("%s", d->name == NULL ? "nill" : d->name);
	if (d->age < 0.0)
		printf("nill\n");
	else
		printf("%d\n", d->age);
	printf("%s", d->owner == NULL ? "nill" : d->owner);
}
