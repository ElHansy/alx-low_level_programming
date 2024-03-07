#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocate memory for array of pointers to node in linked list
 * @list: old list to append
 * @size: size of new list (always 1 more than the old list)
 * @new: new node added the list
 * Return: new list pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nlist;
	size_t i;

	nlist = malloc(size * sizeof(listint_t *));
	if (nlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		nlist[i] = list[i];
	nlist[i] = new;
	free(list);
	return (nlist);
}

/**
 * print_listint_safe - prints listint_t linked list.
 * @head: start from list pointer
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (n);
			}
		}
		n++;
		list = _r(list, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (n);
}
