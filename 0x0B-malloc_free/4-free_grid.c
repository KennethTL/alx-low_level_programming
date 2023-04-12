#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid (created in previos alloc_grid())
 * **@grid: grid created by alloc_grid()
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}

	free(grid);
}
