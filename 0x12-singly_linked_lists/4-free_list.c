#include "lists.h"

/**
 * free_list - frees a list_t list
 * *@head: head of the node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp_store;

	while (head != NULL)
	{
		temp_store = head->next;
		free(head->str);
		free(head);
		head = temp_store;
	}
}
