#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point for application (adds positive numbers)
 * @argc: number of arguments
 * @argv: array of arguments supplied by the system's CLI
 *
 * Return: 0 if successful, otherwise 1 if not successful
 */
int main(int argc, char *argv[])
{
	int i, j, k, n, sum, val;
	int values[100];

	k = 0;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0, n = strlen(argv[i]); j < n; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		values[k] = atoi(argv[i]);
		k++;
	}

	for (val = 0; val <= k - 1; val++)
	{
		sum = sum + values[val];
	}

	printf("%d\n", sum);

	return (0);
}
