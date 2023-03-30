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
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
