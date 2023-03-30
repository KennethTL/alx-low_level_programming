#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * from src string
 * @dest: the first part of the concatenated string (and its
 * terminating null byte will be overridden)
 * @src: the second part of the concatenated string that is copied to
 * the dest string
 * @n: number of bytes to copy from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
