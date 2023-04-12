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
	int i;
	int **array;

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}

	return (array);
}
