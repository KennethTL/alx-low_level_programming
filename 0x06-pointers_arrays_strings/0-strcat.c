#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first part of the concatenated string (and its
 * terminating null byte will be overridden)
 * @src: the second part of the concatenated string that is copied to
 * to the dest string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
