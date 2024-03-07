#include "lists.h"

/**
 * STRlen - returns length of string
 * @s: string of that length to check
 * Return: int length
 */

int STRlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - print linked lists
 * @h:first node pointer
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", STRlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	return (a);
}
