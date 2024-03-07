#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds loop in linked list
 * @head: requested linked list
 * Return: address of node where loop starts, NULL if no loop
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *pt, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (pt = head; pt != end; pt = pt->next)
			if (pt == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - free listint list, even loop
 * @h: head of list pointer
 * Return: number of nodes now free
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *nxt, *loop_node;
	size_t ln;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_listint_loop_fl(*h);
	for (ln = 0; (*h != loop_node || loop) && *h != NULL; *h = nxt)
	{
		ln++;
		nxt = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loopnode->next)
			{
				free(*h);
				break;
			}
			ln++;
			nxt = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (ln);
}
