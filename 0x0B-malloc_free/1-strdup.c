#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the stringf given as a paramter
 * @str: string given as a parameter (address to be copied)
 *
 * Return: pointer to a newly allocated space in memory containing a
 * copy of str
 */
char *_strdup(char *str)
{
	char *str_cpy;
	int i;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	str_cpy = (char *) malloc(sizeof(char) * _strlen(str) + 1);

	if (str_cpy == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		str_cpy[i++] = *str++;
	}

	str_cpy[i] = '\0';

	return (str_cpy);
}

/**
 * _strlen - checks the length of a string
 * @s: string to be evaluated
 *
 * Return: length of string *s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s++)
	{
		i++;
	}

	return (i);
}
