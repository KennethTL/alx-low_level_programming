#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[] = "putchar";
	int i = 0;
	_putchar(95);
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
