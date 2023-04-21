#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * *@separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int val;
	unsigned int index;
	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		val = va_arg(args, int);
		if (index == (n - 1))
		{
			printf("%d", val);
		} else if (separator == NULL)
		{
			printf("%d ", val);
		} else
		{
			printf("%d%c ", val, *separator);
		}
	}
	va_end(args);

	printf("\n");
}
