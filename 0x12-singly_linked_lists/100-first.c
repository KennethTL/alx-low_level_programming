#include "lists.h"

/**
 * pre_main - prints a string befire the main function is executed
 *
 * Return: void
 */
void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
