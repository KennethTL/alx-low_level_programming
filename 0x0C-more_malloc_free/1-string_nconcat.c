#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * *string_nconcat - concatenates two strings
 * *@s1: destination string that is returned after concatenation
 * *@s2: source string where the second part of the concatenated
 * string is obtained
 * @n: number of bytes to be obtained from s2(source string)
 *
 * Return: a pointer to the allocated memory containing s1, otherwise NULL if
 * the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, j, length1, length2, totalLength;
	char *strPtr;

	index = 0, j = 0, length1 = 0, length2 = 0;

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	totalLength = length1 + length2;
	if (n < length2)
	{
		strPtr = malloc(sizeof(char) * (length1 + n + 1));
	} else
	{
		strPtr = malloc(sizeof(char) * (length1 + length2 + 1));
	}

	if (strPtr == NULL)
	{
		return (NULL);
	}

	while (index < length1)
	{
		strPtr[index] = s1[index];
		index++;
	}

	while (index < (n + length1) && n < length2)
	{
		strPtr[index++] = s2[j++];
	}

	while (index < (totalLength) && n >= length2)
	{
		strPtr[index++] = s2[j++];
	}

	strPtr[index] = '\0';
	return (strPtr);
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
