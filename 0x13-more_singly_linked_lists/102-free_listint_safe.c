#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - find loop in linked list
 * @head: linked list pointer
 * Return: address of node if loop present, NULL if no loop
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (p = head; p != last; p = p->next)
			if (p == last->next)
				return (last->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 * @h: head of list
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_node;
	size_t ln;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_listint_loop_fl(*h);
	for (ln = 0; (*h != loop_node || loop) && *h != NULL; *h = next)
	{
		ln++;
		next = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			ln++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (ln);
}
