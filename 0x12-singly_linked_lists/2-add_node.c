#include "lists.h"

/**
 * add_node - add node at beginning of the list
 * @head: pointer address to head node
 * @str: string of node
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head = malloc(sizeof(list_t));

	if (!head || !n_head)
		return (NULL);
	if (str)
	{
		n_head->str = strdup(str);
		if (!n_head->str)
		{
			free(n_head);
			return (NULL);
		}
		n_head->len = STRlen(n_head->str);
	}

	n_head->next = *head;
	*head = n_head;
	return (n_head);
}
