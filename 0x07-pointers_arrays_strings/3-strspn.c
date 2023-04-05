#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be evaluated
 * @accept: substring to be searched in the string
 *
 * Return: number of bytes in the initial segment of s consisiting
 * of only the bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int bytes;
	int indicator;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		indicator = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				indicator = 1;
			}
		}

		if (indicator == 0)
		{
			return (bytes);
		}

	}

	return (0);
}
