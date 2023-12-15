#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @a: source copy
 * @b: character to be paste in s by size n
 * @n: size to be filled with b
 * Return: s
 */

char *_memset(char a[], char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}

	return (a);
}
