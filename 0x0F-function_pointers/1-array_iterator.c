#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - function that exutes a function given
 * @size: is the array size
 * @action: is a pointer to the function you need
 * @array: the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
