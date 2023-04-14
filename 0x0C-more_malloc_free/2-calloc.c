#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array, usimg malloc, and memory
 * is set to zero
 * @nmemb: number of elements in the array
 * @size: size of the array in bytes
 *
 * Return: a pointer to the allocated memory, otherwise NULL if malloc fails or
 * nmemb/size is zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int area, index;
	void *arrayPtr;

	index = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	area = nmemb * size;

	arrayPtr = malloc(nmemb * size);

	while (index < area && arrayPtr)
	{
		((char *)arrayPtr)[index++] = 0;
	}

	return (arrayPtr);
}
