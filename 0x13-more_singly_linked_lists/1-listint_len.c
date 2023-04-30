#include "lists.h"

/**
 * listint_len - Return numebr of elements in linked list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t inc = 0;

	while (h != NULL)
	{
		inc++;
		h = h->next;
	}
	return (inc);
}
