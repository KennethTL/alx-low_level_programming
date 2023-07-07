#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * *@n: string to be worked on
 * @index: desired position of the new bit to be set
 *
 * Return: 1 if successful, otherwise -1 if the function encountered an error
 */
int set_bit(unsigned long *n, unsigned int index)
{
	unsigned int val_size;

	val_size = sizeof(unsigned long int) * 8;

	if (index >= val_size)
	{
		return (-1);
	}

	*n = *n | (1UL << index);

	return (1);
}
