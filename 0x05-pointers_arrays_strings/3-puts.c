#include "main.h"

/**
 * _puts - Print a string to stdout.
 * @str: The input string.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

