#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * **@head: head of the node
 * *@str: value to be added
 *
 * Return: address of the new element, otherwise NULL if function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
