#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * *@ptr: pointer to the memory previously allocated with a call to malloc
 * (malloc(old_size))
 * @old_size: the size in bytes of the allocated spave for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the newly allocated space, otherwise NULL if
 * new_size == 0 && ptr != NULL (call is equivalent to free(ptr))
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int index;
	char *memPtr, *duplicatePtr;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		memPtr = malloc(new_size);
		if (memPtr == NULL)
		{
			return (NULL);
		}

		return (memPtr);
	}

	memPtr = malloc(new_size);

	if (memPtr == NULL)
	{
		return (NULL);
	}
	duplicatePtr = ptr;

	for (index = 0; index < old_size; index++)
	{
		memPtr[index] = duplicatePtr[index];
	}

	free(ptr);

	return (memPtr);
}
