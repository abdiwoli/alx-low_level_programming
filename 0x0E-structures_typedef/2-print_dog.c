#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function prints stuct dog details
 * @d: the struct data
 */

void print_dog(struct dog *d)
{
	printf("%s\n", d->name == NULL || d->name[0] == '\0' ? "(nil)" : d->name);
	if (d->age <= 0.0)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	printf("%s\n", d->owner == NULL || d->owner[0] == '\0' ? "(nil)" : d->owner);
}
