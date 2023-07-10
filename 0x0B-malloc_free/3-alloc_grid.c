#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns pointer to a two-dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(sizeof(int *) * height);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
