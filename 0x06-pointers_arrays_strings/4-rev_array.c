#include "main.h"

/**
 * reverse_array - reverses the content of an array integers
 *
 * @a: array name
 *
 * @n: Number of elements to swap
 *
 * Return: empty
 */


void reverse_array(int *a, int n)
{
	int *d, s, f, temp;

	d = a;

	for (s = 1; s < n; s++)
	{
		d++;
	}

	for (f = 0; f < s / 2; f++)
	{
		temp = a[f];
		a[f] = *d;
		*d = temp;
		d--;
	}
}
