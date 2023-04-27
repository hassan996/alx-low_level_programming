#include "lists.h"

/**
 * print_list - print all elelmenst of list
 * @h: pointr to head of list
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t inc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		inc++;
		h = h->next;
	}
	return (inc);
}
