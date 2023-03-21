#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: decimal value to be evaluated
 *
 * Return: Absolute value of int
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	} else
	{
		c = c * 1;
	}

	return (c);
}
