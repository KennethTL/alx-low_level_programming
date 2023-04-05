#include "main.h"

/**
 * set_string - a function that sets the value of a
 * pointer to a character (char)
 * @s: value of the pointer to be set to the char
 * @to: the character
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
