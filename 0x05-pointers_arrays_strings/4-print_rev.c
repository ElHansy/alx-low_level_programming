#include "main.h"


/**
 * print_rev - Print a string in reverse order.
 * @s: The input string.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
