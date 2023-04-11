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
	int i, x, sum;
	char *cursorPtr;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		i = strtol(argv[x], &cursorPtr, 10);
		if (*cursorPtr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
