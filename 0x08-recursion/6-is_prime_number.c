#include "main.h"

int check_prime_number(int n, int div);

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to be evaluated
 *
 * Return: 1 if the input is a prime number, otherwise 0 if not
 */
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}

/**
 * check_prime_number - checks if an int is a prime number
 * @n: int to be evaluated
 * @div: divisor to be used with modulo operation
 *
 * Return: 1 if prime number, otherwise 0 if not
 */
int check_prime_number(int n, int div)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}

	if ((n % div) == 0)
	{
		return (0);
	}

	if (div * div > n)
	{
		return (1);
	}

	return (check_prime_number(n, div + 1));
}
