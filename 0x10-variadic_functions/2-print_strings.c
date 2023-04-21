#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * *@separator: string to br printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *string;
	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", string);
		}

		if (separator != NULL && index != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
