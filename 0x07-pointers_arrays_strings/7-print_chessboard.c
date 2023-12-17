#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to 2d array contain chess characters
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int m, n;

	m = 0;

	while (m < 8)
	{
		n = 0;

		while (n < 8)
		{
			_putchar (a[m][n]);
			n++;
		}
		_putchar ('\n');
		m++;
	}
}
