#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that alowcates memry for array
 * @size: the size of the memory
 * @c: initial paramater for the array
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
	{
		printf("failed to allocate memory\n");
		return (ptr);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
