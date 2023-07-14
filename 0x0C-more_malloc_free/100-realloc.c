#include "main.h"
#include <stdlib.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - allocates memory block using malloc and free
 * @ptr: pointer to the memory previosly allocated with malloc
 * @old_size: The size of the allocated space of ptr
 * @new_size: The new size to allocate
 * Return: new resized pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *new_ptr;

	if (new_size == 0  && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_size > old_size)
		new_size = old_size;
	if (!new_ptr)
		return (NULL);
	while (i < n)
	{
		*(new_ptr + i) = *(ptr + i);
		i++;
	}
	free(ptr);
	return (new_ptr);
}
