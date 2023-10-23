#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 *
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int no1 = 0;

	if (n < 0)
	{
		no1 = -n;
		_putchar('-');
	}
	else
	{
		no1 = n;
	}

	if (no1 / 10)
	{
		print_number(no1 / 10);
	}
	_putchar((no1 % 10) + '0');
}
