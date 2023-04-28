#include "lists.h"

/**
 * add_node - add new node at begining of list
 * @head: pointer to head of list
 * @str: string to add new node
 * Return:address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (!head || !str)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);

	n_node->str = strdup(str);
	if (!n_node->str)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = strlen(str);
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}

