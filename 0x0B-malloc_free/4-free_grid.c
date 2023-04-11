#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees 2D grid previously created
 *@grid: the created grid to be freed
 *@height: height of the grid
 *
 *Return: Void
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
