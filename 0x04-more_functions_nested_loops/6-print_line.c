#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
*/

void print_line(int n)
{
	int i;

	while (i <= n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
