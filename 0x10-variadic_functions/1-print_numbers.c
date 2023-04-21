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

		printf("%d", val);

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
