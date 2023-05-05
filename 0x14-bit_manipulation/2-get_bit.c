#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value to be evaluated
 * @index: index of the value of the bit to be returned
 *
 * Return: value of the bit at index "index", otherwise -1 if the function
 * encountered an error
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned int val_size = sizeof(unsigned long int) * 8;

	val_size = sizeof(unsigned long int) * 8;

	if (index >= val_size)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
