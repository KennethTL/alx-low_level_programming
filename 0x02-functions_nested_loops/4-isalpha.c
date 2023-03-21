#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: decimal value for ascii character that is checked
 *
 * Return: 1 if c is a letter (upper/lowercase), 0 otherwise
 */
int _isalpha(int c)
{
	int i;
	int j;
	int rval;

	for (i = 97; i <= 122; i++)
	{
		for (j = 65; j <= 90; j++)
		{
			if (c == i || c == j)
			{
				rval = 1;
				break;
			}
		}

		rval = 0;
	}

	return (rval);
}
