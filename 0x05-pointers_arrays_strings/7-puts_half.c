#include "main.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to be worked on
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
