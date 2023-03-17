#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;
	char number[100];
	int last;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(number, "%d", n);
	last = strlen(number) - 1;
	last_digit = number[last] - '0';
	if (n < 0)
	{
		last_digit *= -1;
	} else
	{
		last_digit *= 1;
	}

	if (last_digit > 5)
	{
		printf("Last digit of %d is %c and is greater than 5\n", n, number[last]);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %c and is 0\n", n, number[last]);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	}

	return (0);
}
