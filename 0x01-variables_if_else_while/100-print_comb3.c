#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
			if (i < j && i != j)
			{
				putchar('0' + i);
				putchar('0' + j);

				if (i == 8 && j == 9)
				{
					break;
				}

				putchar(44);
				putchar(32);
			} else
			{
				continue;
			}
	}
	putchar('\n');

	return (0);
}
