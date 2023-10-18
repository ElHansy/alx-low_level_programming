#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array int
 *
 * @b: first arg
 * @n: second arg
 * Description: return result
 *
 *Return: void 0
 */


void print_array(int *b, int n)
{
	int *pt = b, i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", pt[i]);
		else if (i > 0)
		{
			printf(", ");
			printf("%d", pt[i]);
		}
	}
	printf("%c", '\n');
}
