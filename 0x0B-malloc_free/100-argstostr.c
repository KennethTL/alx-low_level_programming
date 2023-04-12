#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: argument counter
 * **@av: arguments supplied by the ssytem's CLI
 *
 * Return: pointer to a new string, otherwise returns NULL if
 * function fails
 */
char *argstostr(int ac, char **av)
{
	char *string, *sbuffer;
	int i, x, k, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		sbuffer = av[i];
		x = 0;

		while (sbuffer[x++])
			length++;
		length++;
	}

	string = (char *)malloc(sizeof(char) * (length + 1));

	if  (string == NULL)
	{
		return (NULL);
	}

	for (i = 0, x = 0; i < ac && x < length; i++)
	{
		sbuffer = av[i];
		k = 0;

		while (sbuffer[k])
		{
			string[x] = s[k];
			k++;
			x++;
		}

		string[x++] = '\n';
	}

	string[x] = '\0';
	return (string);
}
