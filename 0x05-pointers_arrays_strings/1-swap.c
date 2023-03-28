#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int value for the first parameter
 * @b: int value for the second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
