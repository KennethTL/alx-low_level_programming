#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to be worked on
 * @size: size of the array
 * *@action: pointer to the function that needs to be executed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	index = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
