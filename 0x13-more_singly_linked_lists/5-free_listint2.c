#include "lists.h"

/**
 * free_listint2 - function free list
 * @head: pointer to pointer in head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
