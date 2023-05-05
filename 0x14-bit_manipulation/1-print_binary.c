#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in base 10 (decimal)
 *
 * Return: void
 */
void print_binary(unsigned long n)
{
	int bin_val;
	unsigned long int mask;

	bin_val = 0;
	mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			printf("1");
			bin_val = 1;
		} else if (bin_val)
		{
			printf("0");
		}

		mask = mask >> 1;
	}

	if (!mask)
	{
		printf("0");
	}
}
