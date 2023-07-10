#include "main.h"
#include <stdlib.h>

int get_width(int** array)
{
	int* first_row = array[0];
	int width = 0;
	while (first_row[width] != 0) {
		width++;
	}

	return width;
}

/**
 * free_grid - function free 2D array
 * @grid: the array
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int i, j, width;

	if (grid == NULL)
		return;
	width = get_width(grid);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid[i]);
	}
		free(grid);
}
