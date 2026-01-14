#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if grid is NULL to prevent crashing */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Free each row (the horizontal arrays) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Free the "spine" (the array of pointers) */
	free(grid);
}
