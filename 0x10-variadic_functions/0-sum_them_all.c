#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of ints to add
 *
 * Return: sum of arguments, otheriwse return 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum, val;
	unsigned int index;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

	for (index = 0; index < n; index++)
	{
		val = va_arg(args, int);
		sum = sum + val;
	}

	va_end(args);

	return (sum);
}
