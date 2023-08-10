#include "main.h"
/**
 * free_grid - frees memory for a two dimensuional array pointer
 * @grid: input pointer
 * @height: input
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
