#include <stdio.h>

/**
 * main - Entry point for application
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those args
 * passed to the program by the system's CLI
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
