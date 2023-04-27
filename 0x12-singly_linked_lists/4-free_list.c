#include "lists.h"

/**
 * free_list - empty list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *ch;

	while (head)
	{
		ch = head->next;
		free(head->str);
		free(head);
		head = ch;
	}
}
