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
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && i != j && i < k && i != k && j < k && j != k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (i == 7 && j == 8 && k == 9)
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
		}
	}

	putchar('\n');

	return (0);
}
