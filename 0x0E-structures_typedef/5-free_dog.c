#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs (from the heap memory)
 * *@d: dog to be freed from the heap memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
