#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @string: string to be evaluated
 *
 * Return: pointer to the modified string array
 */
char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = (string[i] - 32);
		} else
		{
			string[i] = string[i];
		}

		i++;
	}

	return (string);
}
