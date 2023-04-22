#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * *@format: the list of types of arguments passed to the function
 *		- c -> char
 *		- i -> integer
 *		- f -> float
 *		- s -> char *
 *		* any other char should be ignored *
 *Return: void
 */
void print_all(const char *const format, ...)
{
	int index = 0;
	char *div, *string;
	va_list args;

	div = "";
	va_start(args, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", div,  va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", div,  va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", div,  va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", div, string);
					break;
				default:
					index++;
					continue;
			}
			div = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(args);
}
