#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * *@array: array of integers to be searched
 * @size: number of elements in the array "array"
 * *@cmp: pointer to the function to be used to compare
 * values
 *
 * Return: index of the 1st element which the cmp function doesn't
 * return 0, otherwise if no element matches or size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	while (index < size)
	{
		if (cmp(array[index]))
		{
			return (index);
		}

		index++;
	}

	return (-1);
}
