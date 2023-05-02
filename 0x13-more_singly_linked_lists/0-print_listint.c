#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * *@h: linked list to be evaluated
 *
 * Return: number of nodes in list *h
 */
size_t print_listint(const listint_t *h)
{
	size_t node_val;

	node_val = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_val++;
	}

	return (node_val);
}
