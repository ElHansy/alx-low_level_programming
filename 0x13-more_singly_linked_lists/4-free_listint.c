#include "lists.h"

/**
 * free_listint - free the list
 * @head: first node pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
