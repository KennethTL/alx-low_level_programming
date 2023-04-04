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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		} else
		{
			return (NULL);
		}
		s++;
	}
}
