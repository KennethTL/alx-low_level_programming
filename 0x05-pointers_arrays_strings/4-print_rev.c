#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int index = 0;
	int i;

	while (s[index] != '\0')
	{
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
