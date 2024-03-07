#include "lists.h"

/**
 * print_listint - print link list
 * @h: first node pointer
 * Return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
