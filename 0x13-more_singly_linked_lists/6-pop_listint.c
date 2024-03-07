#include "lists.h"

/**
 * pop_listint - pop head node of the list
 * @head: first node pointer
 * Return: popped node value
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = node;
	return (i);
}
