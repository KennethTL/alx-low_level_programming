#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - executes simple arithmetic operations
 * @argc: argument count
 * *@argv: array of arguments supplied by the system's CLI
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int operand1, operand2, solution;
	char *sign;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	sign = argv[2];

	operation = get_op_func(sign);

	if (!operation || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	sign = argv[2];

	if ((*sign == '%' && operand2 == 0) || (*sign == '/' && operand2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	solution = operation(operand1, operand2);

	printf("%d\n", solution);

	return (0);
}
