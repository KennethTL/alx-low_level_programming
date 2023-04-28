#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * *@h: list to be evaluated
 *
 * Return: number of elements in linked list h
 */
size_t list_len(const list_t *h)
{
	unsigned int index;

	index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}

	return (index);
}
