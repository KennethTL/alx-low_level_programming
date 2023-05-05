#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, otherwise 1 if little endian
 */
int get_endianness(void)
{
	char *pointer;
	int number = 1;

	pointer = (char *)&number;

	return (*pointer == 1);
}
