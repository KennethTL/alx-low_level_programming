#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @string: string to be evaluated
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *string)
{
	int i = 0;
	int j;
	char specialChar[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
				'"', '(', ')', '{', '}'};

	while (string[i] != '\0')
	{
		if (i == 0 && string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = (string[i] - 32);
		}

		for (j = 0; j < 13; j++)
		{
			if (string[i] == specialChar[j])
			{
				if (string[i + 1] >= 'a' && string[i + 1] <= 'z')
				{
					string[i + 1] = string[i + 1] - 32;
				} else
				{
					string[i + 1] = string[i + 1];
				}
			}
		}

		i++;
	}

	return (string);
}
