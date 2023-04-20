#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * *@argv: array of arguments supplied by the system's CLI
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int index, no_of_bytes;

	if (argc == 1)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < no_of_bytes; index++)
	{
		printf("%02hhx", *((char *)main + index));

		if (index < (no_of_bytes - 1))
		{
			printf(" ");
		} else
		{
			printf("\n");
		}
	}

	return (0);
}
