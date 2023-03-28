#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
	}

	_putchar('\n');
}
