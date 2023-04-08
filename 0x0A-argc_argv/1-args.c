#include <stdio.h>

/**
 * main - Entry point for application
 * @argc: number of arguments
 * @argv: array of arguments provided by the system's CLI
 *
 * Return: 0 if successful, otherwise 1 if not successful
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
