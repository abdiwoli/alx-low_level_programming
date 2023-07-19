#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that exutes a function given
 * size: is the array size
 * action is a pointer to the function you need
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
