#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created
 * by alloc_grid function.
 * @grid: Pointer to a 2D grid to be freed in memory.
 * @height: Height of the grid to be freed.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return; /*Return NULL if grid is NULL || height = 0 or -ve*/
	}

	/*Free the memory for each row*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/*Free the memory for the array of integer pointers (grid)*/
	free(grid);
}
