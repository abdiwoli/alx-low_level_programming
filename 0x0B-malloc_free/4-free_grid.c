#include "main.h"
#include <stdlib.h>


/**
 * free_grid - function free 2D array
 * @grid: the array
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
