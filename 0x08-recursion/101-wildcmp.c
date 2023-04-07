#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - compares 2 strings and returns 1 if the strings can
 * be considered identical, otherwise return 0 (Wild card string matching)
 * @s1: first string argument
 * @s2: second string argument that can contain the wildcard (*) character
 *
 * Return: 1 if identical, otherwise 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int star = -1;
	int last_match;
	int m = strlen(s1);
	int n = strlen(s2);

	while (i < m)
	{
		if (j < n && s2[j] == '*')
		{
			last_match = i;
			star = j++;
		} else if (star >= 0)
		{
			i = ++last_match;
			j = star + 1;
		} else
		{
			return (0);
		}
	}

	while (j < n && s2[j] == '*')
	{
		j++;
	}

	return (j == n);
}
