#include "main.h"

/**
 *leet - encodest a string into 1337
 *@string: string to be evaluated
 *
 * Return: pointer to the modified string
 */
char *leet(char *string)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i = 0;
	int j;

	while (string[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == a[j])
			{
				string[i] = b[j];
			}
		}

		i++;
	}

	return (string);
}
