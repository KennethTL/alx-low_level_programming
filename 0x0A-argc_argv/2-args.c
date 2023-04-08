#include <stdio.h>

/**
 * main - Entry point to application
 * @argc: number of arguments
 * @argv: array of arguments supplied by the system's CLI
 *
 * Return: 0 if successful, otherwise 1 if not successful
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
