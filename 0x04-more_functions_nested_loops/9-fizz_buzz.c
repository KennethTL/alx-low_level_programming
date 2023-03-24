#include <stdio.h>

/**
 * main - executes the "Fizz-Buzz" test by printing numbers from
 * 1 to 100, followed by a new line. But for multiples of 3, prints
 * Fizz instead of the number and for multiples of 5 prints Buzz. Fizz-Buzz
 * is printed when the number is a multiple of both 3 and 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("Fizz Buzz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
