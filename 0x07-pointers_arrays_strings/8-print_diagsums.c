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

	for (position = 0; position < size; position++)
	{
		diagsum1 = diagsum1 + a[(size * position) + position];
		diagsum2 = diagsum2 + a[(size * (position + 1)) - (position + 1)];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
