#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number of \\ to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (i == 0)
		_putchar('\n');

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

}
