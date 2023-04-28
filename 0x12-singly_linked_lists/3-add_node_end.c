#include "lists.h"

/**
 * add_node_end - add new node at end of list
 * @head: pointer to head of linked list
 * @str: string to add new node
 * Return:address of new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = strlen(n_node->str);
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}

