#include "lists.h"

/**
 * free_list - frees all nodes of list
 * @head: pointer to node head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *n_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		n_node = node->next;
		free(node->str);
		free(node);
		node = n_node;
	}
}
