#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of list
 * @head: pointer to the head of the list
 * @n: value to set for the new node
 *
 * Return: address of new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *cu;

	if (!head)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
		return (n_node);
	}
	cu = *head;
	while (cu->next)
	{
		cu = cu->next;
	}
	cu->next = n_node;
	return (n_node);
}
