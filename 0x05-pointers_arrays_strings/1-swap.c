#include "main.h"

/**
 * swap_int - swab vlues of two integers
 * @a:input
 * @b:input
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
