#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2D array, otherwise NULL if functions fails
 */
int **alloc_grid(int width, int height)
{
	int i, x, grid_area;
	int **array;

	array = malloc(sizeof(int *) * height);
	grid_area = width * height;

	if (grid_area <= 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (x = 0; x < width; x++)
			array[i][x] = 0;

	return (array);
}
