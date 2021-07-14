#include "holberton.h"

/**
 * free_grid - function
 * @grid: parameter
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0 ; idx <= height ; idx++)
	{
		free(grid[idx]);
	}
	free(grid);
}
