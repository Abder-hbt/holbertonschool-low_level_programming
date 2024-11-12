/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: int
 * @height:int
 *
 * Return: a double pointer to the 2D array
 */

#include"main.h"
#include<stdlib.h>

int **alloc_grid(int width, int height)

{

int **grid;
int i;
int l;
int c;
int f;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (f = 0; f < i; l++)
	{
	free(grid[f]);
	}
	free(grid);
	return (NULL);
	}
	}

	for (c = 0; c < height; c++)
	{
		for (l = 0; l < width; l++)
		{
			grid[c][l] = 0;
		}
	}
	return (grid);
}
