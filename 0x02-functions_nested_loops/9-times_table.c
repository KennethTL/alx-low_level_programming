#include "main.h"

/**
 * times_table - print thr 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int val;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			val = i * j;

			if (j == 0)
			{
				_putchar('0' + val);
			}

			if (val < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + val);
			} else if (val >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (val / 10));
				_putchar('0' + (val % 10));
			}
		}
		_putchar('\n');
	}
}
