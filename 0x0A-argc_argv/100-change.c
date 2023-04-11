#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to application
 * (prints the minimum number of coins to make change for an amount of money)
 * @argc: number of variables
 * @argv: variables supplied by the systems CLI
 *
 * Return: 0 if successful, otherwise 1 if not successful
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	int total_amount;
	int counter;
	char *cursorPtr;
	int cents[] = {25, 10, 2, 5};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total_amount = strtol(argv[1], &cursorPtr, 10);
	counter = 0;

	if (!*cursorPtr)
	{
		while (total_amount > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total_amount >= cents[i])
				{
					counter += total_amount / cents[i];
					total_amount = total_amount % cents[i];
				}
			}
		}
		if (total_amount == 1)
		{
			counter++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", counter);
	return (0);
}
