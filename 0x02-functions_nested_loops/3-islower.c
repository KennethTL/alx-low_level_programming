#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: ascii character value in decimal to check if it's lowercase
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i;
	int rval;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			rval = 1;
			break;
		}

		rval = 0;
	}

	return (rval);
}
