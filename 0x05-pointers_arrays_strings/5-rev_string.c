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
	int length;
	char tmp;

	while (s[index] != '\0')
	{
		index++;
	}

	length = index - 1;

	for (i = 0; i < index / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length];
		s[length--] = tmp;
	}
}
