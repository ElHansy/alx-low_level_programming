#include "lists.h"

/**
 * sum_listint - return sum data
 * @head: first node pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
