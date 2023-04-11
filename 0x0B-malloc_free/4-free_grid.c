#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees 2d array
  * @grid: block memory to be freed
  * @height:height of array
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
