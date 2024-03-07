#include "lists.h"

/**
 * listint_len - print linked list
 * @h: first node pointer
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
