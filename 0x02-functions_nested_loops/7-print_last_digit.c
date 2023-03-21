#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: decimal value to be evaluated
 *
 * Return: last digit of c
 */
int print_last_digit(int c)
{
	int rval;

	if (c < 0)
	{
		c = c * -1;
		rval = c % 10;
		_putchar('0' + rval);

	} else
	{
		rval = c % 10;
		_putchar('0' + rval);
	}

	return (rval);
}
