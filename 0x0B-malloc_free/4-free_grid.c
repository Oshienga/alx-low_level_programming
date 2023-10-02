#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @grid: argument
 * @height: argument
 * Return: Always 0 (Success)
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
