#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a dimensional array of int
 * @width: width input
 * @height: height of input
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int a, d, e, s;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (s = 0; s < a; s++)
				free(grid[s]);
			free(grid);
			return (NULL);
		}
	}
	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
			grid[d][e] = 0;
	}
	return (grid);
}
