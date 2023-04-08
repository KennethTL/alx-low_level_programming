#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to application (Multiplies two numbers)
 * @argc: number of arguments
 * @argv: array of arguments supplied by the system's CLI
 *
 * Return: 0 if successful, otherwise 1 if not successful or no
 * arguments
 */
int main(int argc, char *argv[])
{
	int m1, m2, mvalue;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	mvalue = m1 * m2;

	printf("%d\n", mvalue);

	return (0);
}
