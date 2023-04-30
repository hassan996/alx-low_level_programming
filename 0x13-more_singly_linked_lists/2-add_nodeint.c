#include "lists.h"

/**
 * add_nodeint - add new node at begining of list
 * @head: pointer to pointer to head of list
 * @n: int to be stored in new node
 * Return:address of new elemnt or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
