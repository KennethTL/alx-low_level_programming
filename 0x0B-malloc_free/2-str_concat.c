#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * *str_concat - concatenates two strings
 * *@s1: first section of the string and it is returned after the
 * concatenation process (points to a newly allocated space in memory)
 * *@s2: second seciton of the concatenated string
 *
 * Return: pointer to s1, otherwise NULL if a failure occurs
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i, size, s1_length, s2_length;

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);
	size = s1_length + s2_length + 1;

	new_string = (char *) malloc(size * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; i < s1_length; i++)
	{
		new_string[i] = s1[i];
	}

	for (i = 0; i < s2_length; i++)
	{
		new_string[s1_length + i] = s2[i];
	}

	new_string[size - 1] = '\0';

	return (new_string);
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
