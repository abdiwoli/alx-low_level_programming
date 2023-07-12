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
	int **ptr, cl, rw;

	if (width < 1 || height < 1)
		return (NULL);
	ptr = (int **) malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);
	for (rw = 0; rw < height; rw++)
	{
		ptr[rw] = (int *) malloc(sizeof(int) * width);

		if (!ptr[rw])
		{
			while (--rw >= 0)
			{
				free(ptr[rw]);
			}
			free(ptr[rw]);
			return (NULL);
		}
		for (cl = 0; cl < width; cl++)
		{
			ptr[rw][cl] = 0;
		}
	}
	return (ptr);
}
