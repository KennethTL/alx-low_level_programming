#include <stdio.h>
#include "main.h"

void print_line(char *c, int size, int line);

/**
 * print_buffer - prints a buffer
 * @b: points to bytes
 * @size: size of bytes
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}

/**
 * print_line - prints a line of a certain size of bytes of a buffer
 * @c: buffer to ne printed
 * @size: byte size of buffer to print
 * @line: buffer line to print
 * Return: void
 */
void print_line(char *c, int size, int line)
{
	int j;
	int k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= size)
			printf("%02x", c[line * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= size; k++)
	{
		if (c[line * 10 + k] > 31 && c[line * 10 + k] < 127)
			putchar(c[line * 10 + k]);
		else
			putchar('.');
	}
}
