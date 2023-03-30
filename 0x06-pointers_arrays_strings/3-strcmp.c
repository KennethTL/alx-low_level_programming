#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first argument of type string
 * @s2: second argument of type string
 *
 * Return: 0 if s1 and s2 are equal, a negative value if s1 is less tham s2,
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a1;
	int a2;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}

		a1 = (int) s1[i];
		a2 = (int) s2[i];

		if (a1 > a2)
		{
			return (1);
		}

		if (a2 > a1)
		{
			return (-1);
		}
	}
}
