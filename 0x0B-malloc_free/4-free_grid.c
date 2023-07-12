#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function free allocated 2d array
 * @grid: the array
 * @height: the height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
