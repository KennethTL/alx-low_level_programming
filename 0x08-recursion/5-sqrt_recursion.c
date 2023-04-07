#include "main.h"

float _sqrt_guess(float n, float guess, float step);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square to be evaluated
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return ((int) _sqrt_guess(n, 0, 1));
}

/**
 * _sqrt_guess - returns the natural square root of a number
 * @n: square to be evaluated
 * @guess: approximation integer to be squared
 * @step: increases the guess value by a certain number
 *
 * Return: natural square root of n
 */
float _sqrt_guess(float n, float guess, float step)
{
	float square = guess * guess;

	if (n == square)
	{
		return (guess);
	}

	if (square > n)
	{
		return (-1);
	}

	return (_sqrt_guess(n, guess + step, step));
}
