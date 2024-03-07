#include "lists.h"

/**
 * get_nodeint_at_index - return node index
 * @head: first node pointer
 * @index: index of node
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int j;

	for (node = head, j = 0; node && j < index; node = node->next, j++)
		;
	return (node);
}
