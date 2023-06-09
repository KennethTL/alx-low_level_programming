#include "main.h"

/**
 *_strcpy - copies the string pointed to by src, including the
 *terminating null byte to the buffer pointed to by dest
 *@dest: destination
 *@src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
