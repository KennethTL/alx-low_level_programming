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
	char *chr_ptr = 0;
	int buffer;

	while (*s != '\0')
	{
		buffer = *s++;
		if (buffer == c)
		{
			chr_ptr = (s - 1);
			break;
		}
		if (buffer == 0)
		{
			chr_ptr = 0;
		}
	}

	return (chr_ptr);
}
