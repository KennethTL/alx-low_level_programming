#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * *@b: pointer to a string of 0s and 1s chars
 *
 * Return: the converted number in decimal(base 10), otherwise return 0 if
 * (1)there's one or more chars in the string b that's not 0 or 1
 * (2)b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}

		value = (value << 1) + (*b++ - '0');
	}

	return (value);
}
