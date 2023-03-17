#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		} else
		{
			break;
		}
	}

	putchar('\n');

	return (0);
}
