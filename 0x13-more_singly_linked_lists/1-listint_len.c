#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * *@h: linked list to be evaluated
 *
 * Return: number of elements in linked linked list *h
 */
size_t listint_len(const listint_t *h)
{
	size_t node_member;

	node_member = 0;

	while (h)
	{
		h = h->next;
		node_member++;
	}

	return (node_member);
}
