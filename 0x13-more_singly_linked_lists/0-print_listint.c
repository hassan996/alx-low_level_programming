#include "lists.h"

/**
 * print_listint - prints elementd of list
 * @h:pointer to head of list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t inc = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		inc++;
	}
	return (inc);
}

