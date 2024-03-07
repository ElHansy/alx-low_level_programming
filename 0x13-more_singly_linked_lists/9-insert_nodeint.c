#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: first node pointer
 * @idx: index to add new node
 * @n: value of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *n_node = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (!head || !n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node)
	{
		if (a == idx - 1)
		{
			n_node->next = node->next;
			node->next = n_node;
			return (n_node);
		}
		a++;
		node = node->next;
	}
	free(n_node);
	return (NULL);
}
