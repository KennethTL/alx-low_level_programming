#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int index = 0;
	int i;

	while (s[index] != '\0')
	{
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		*s = _putchar(s[i]);
	}
}
