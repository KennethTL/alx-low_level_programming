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
		_putchar('+');
	} else if (n == 0)
	{
		rval = 0;
		_putchar('0');
	} else
	{
		rval = -1;
		_putchar('-');
	}

	return (rval);
}
