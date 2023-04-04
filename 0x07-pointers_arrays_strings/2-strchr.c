#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: first occurrence of the character being searched
 *
 * Return: pointer to the string s, NULL if character does not exist
 */
char *_strchr(char *s, char c)
{
	char *chr_ptr = NULL;
	int buffer;

	while (*s != '\0')
	{
		buffer = *s++;
		if (buffer == c)
		{
			return (s - 1);
		} else if (buffer == 0)
		{
			return (NULL);
		}
	}
}
