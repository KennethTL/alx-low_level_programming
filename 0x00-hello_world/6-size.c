#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	float f;
	long int l_int;
	long long int ll_int;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
