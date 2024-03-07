#include "lists.h"

/**
 * reverse_listint - reverse int list
 * @head: first node pointer
 * Return: head address
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *nxt = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		nxt = node->next;
		node->next = *head;
		*head = node;
		node = nxt;
	}
	return (*head);
}
