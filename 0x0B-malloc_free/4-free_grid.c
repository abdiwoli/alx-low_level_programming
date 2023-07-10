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

	while (**grid != '\0')
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		grid++;
	}
		free(grid);
}
