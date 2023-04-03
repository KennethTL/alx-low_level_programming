#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory location that is receiving copied content
 * @src: memory location from where copied content is obtained
 * @n: the number of bytes to be copied from src to dest
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
