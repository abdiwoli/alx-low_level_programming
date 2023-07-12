#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function returns allocates memory for 2d
 * @width: the width od the array
 * @height: the height of the array
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, cl = 0, rw = 0, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);
	while (rw < height)
	{
		ptr[rw] = (int *) malloc(sizeof(int) * width);
		if (!ptr[rw])
		{
			for (i = 0; i < rw; i++)
				free(ptr[i]);
			free(ptr);
				return (NULL);
		}
		cl = 0;
		while (cl < width)
		{
			ptr[rw][cl] = 0;
			cl++;
		}
		rw++;
	}
	return (ptr);
}
