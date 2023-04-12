#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of characters(chars), and initializes
 * it with a specific character(char)
 * @size: size of array to be initialized
 * @c: character to be set when array is initialized
 *
 * Return: pointer to the initialized array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array_init;

	if (size == 0)
	{
		return (NULL);
	}

	array_init = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array_init[i] = c;
	}

	return (array_init);
}
