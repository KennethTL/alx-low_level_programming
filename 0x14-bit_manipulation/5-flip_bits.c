#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number before bits are flipped
 * @m: number after bits are flipped
 *
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long n, unsigned long m)
{
	int total_bits;
	unsigned long int difference;

	total_bits = 0;

	difference = n ^ m;

	for (; difference > 0; difference >>= 1)
	{
		if (difference & 1)
		{
			total_bits++;
		}
	}

	return (total_bits);
}
