#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n tom 98
 * @n: parameter used as the starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			} else
			{
				break;
			}
		}
		putchar('\n');
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			} else
			{
				break;
			}
		}
		putchar('\n');
	}
}
