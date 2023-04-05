#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string being searched for in string s
 *
 * Return: pointer to the byte in s that matches one of the bytes,
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
