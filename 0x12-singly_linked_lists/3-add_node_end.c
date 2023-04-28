#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * **@head: head of the node
 * *@str: value to be added
 *
 * Return: address of the new element, otherwise NULL if function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_store;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	temp_store = *head;

	if (temp_store == NULL)
	{
		temp_store = new_node;
		*head = temp_store;
	} else
	{
		while ((temp_store->next) != NULL)
		{
			temp_store = temp_store->next;
		}

		temp_store->next = new_node;
	}

	return (*head);
}
