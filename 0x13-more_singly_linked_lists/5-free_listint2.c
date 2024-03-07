#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first node pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *nodeX;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		nodeX = node;
		node = node->next;
		free(nodeX);
	}
	*head = NULL;
}
