#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be counted
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int size = 0;
	int i = 0;

	while (s[i] != 0)
	{
		size++;
	}

	return (size);
}
