#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @string: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *string)
{
	int i;
	int j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (string[i] == a[j])
			{
				string[i] = b[j];
				break;
			}
		}
	}
	return (string);
}
