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
			_putchar('0' + val);
			_putchar(',');
		}

		_putchar('\n');
	}
}
