#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be evaluated
 *
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */
int print_sign(int n)
{
	int rval;

	if (n > 0)
	{
		rval = 1;
	} else if (n == 0)
	{
		rval = 0;
	} else
	{
		rval = -1;
	}

	return (rval);
}
