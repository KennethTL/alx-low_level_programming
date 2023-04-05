#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that printsthe sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix of integers
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int position;
	unsigned int diagsum1;
	unsigned int diagsum2;

	diagsum1 = 0;
	diagsum2 = 0;

	for (position = 0; position < (size * size); position++)
	{
		if (position % (size + 1) == 0)
		{
			diagsum1 += *(a + position);
		}

		if (position % (size - 1) == 0 && position != 0 &&
				position < size * size - 1)
		{
			diagsum2 += *(a + position);
		}
	}

	printf("%d. %d", diagsum1, diagsum2);
}
