#include "main.h"

/**
 * _strncpy - copies a string based on the number of characters specified
 * in the argument
 * @dest: where the string is to be copied
 * @src: where the characters of the copied string are obtained
 * @n: number of characters to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == 0 || src == 0 || n == 0)
	{
		return (dest);
	}

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
