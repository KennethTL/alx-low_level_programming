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
	int index, num_args, _int;
	char _chr, *s, *div;
	float _float;
	va_list args;

	num_args = strlen(format), va_start(args, format), index = 0;
	if (!format)
		return;
	while (index < num_args)
	{
		switch (format[index])
		{
			case 'c':
				_chr = va_arg(args, int);
				printf("%s%c", div, _chr);
				break;
			case 'i':
				_int = va_arg(args, int);
				printf("%s%d", div, _int);
				break;
			case 'f':
				_float = va_arg(args, double);
				printf("%s%f", div, _float);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				printf("%s%s", div, s);
				break;
			default:
				index++;
				continue;
		}
		div = ", ";
		index++;
	}
	printf("\n");
	va_end(args);
}
