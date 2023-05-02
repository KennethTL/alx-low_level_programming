#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * **@head: address of new node
 * @n: value of new node
 *
 * Return: address of the new element, otherwise NULL if the function fails
 */
liatint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = new_node;
	}

	return (*head);
}
