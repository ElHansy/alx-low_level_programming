#include "main.h"

/**
 * print_most_numbers - unction that prints the numbers, from 0 to 9 xpt 2 & 4
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		while (i != 2 && i != 4)
		{
			_putchar(i + '0');
			break;
		}
		i++;
	}
	_putchar('\n');
}

