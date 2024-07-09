#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - 2D array
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (h = =; h >= 0; h++)
			{
				free(h);
				return (NULL);
			}
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);

}
