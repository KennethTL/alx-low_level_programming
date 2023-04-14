#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array to be included
 * Array should be ordered from min to max
 *
 * Return: pointer to the created array, otherwise NULL if malloc
 * fails or min > max
 */
int *array_range(int min, int max)
{
	int *arrayPtr;
	int index;
	int range;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min;

	arrayPtr = malloc((range + 1) * sizeof(*arrayPtr));

	if (arrayPtr == NULL)
	{
		return (NULL);
	}

	for (index = 0; min <= max; index++, min++)
	{
		arrayPtr[index] = min;
	}

	return (arrayPtr);
}
