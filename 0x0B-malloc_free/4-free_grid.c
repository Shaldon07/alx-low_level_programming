#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2-dimensional array
 * @grid: 2-dimensional grid
 * @height: height dimension of the grid
 * Description: frees memory of the grid
 * Return: nothing (void)
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
