#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: targeted Array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
