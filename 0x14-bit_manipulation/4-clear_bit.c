#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * *@n: string to be worked on
 * @index: desired position where the value 0 is to be set
 *
 * Return: 1 if successful, otherwise -1 if the function encountered an error
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned int val_size;

	val_size = sizeof(*n) * 8;

	if (index >= val_size)
	{
		return (-1);
	}

	*n = *n & ~(1UL << index);

	return (1);
}
