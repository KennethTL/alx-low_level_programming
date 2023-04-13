#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc()
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory, otherwise terminate with a
 * status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
