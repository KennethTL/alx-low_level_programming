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
	int val = c;

	if (val < 0)
	{
		val = val * -1;
		rval = val % 10;
		_putchar('0' + rval);

	} else
	{
		rval = val % 10;
		_putchar('0' + rval);
	}

	return (rval);
}
