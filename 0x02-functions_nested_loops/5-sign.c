#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: character
 *
 * Return: 1 and prints + or 0 and prints 0 or -1 and prints -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
