#include "lists.h"

/**
 * list_len - length of linked list
 * @h: first node pointer
 * Return: size of list (nodes number)
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
