#include "holberton.h"

/**
 * free_grid - function
 * @grid: parameter
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	for (height = 0 ; height >= 0 ; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
