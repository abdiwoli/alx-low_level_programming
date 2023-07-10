#include "main.h"
#include <stdlib.h>


/**
 * free_grid - function free 2D array
 * @grid: the array
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	while(height)
		free(grid[height--]);
	free(grid);
}


