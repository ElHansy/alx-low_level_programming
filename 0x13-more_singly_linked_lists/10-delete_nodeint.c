#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at taken index
 * @head: first node pointer
 * @index: node index to delete
 * Return: 1 on success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p_node;
	unsigned int j = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			p_node->next = node->next;
			free(node);
			return (1);
		}
		j++;
		p_node = node;
		node = node->next;
	}
	return (-1);
}
