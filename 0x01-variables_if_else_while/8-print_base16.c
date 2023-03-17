#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char hex;

	for (hex = 48; hex <= 57; hex++)
	{
		putchar(hex);
	}

	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}

	putchar('\n');

	return (0);
}
