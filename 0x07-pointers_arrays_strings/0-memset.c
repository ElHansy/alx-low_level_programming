#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: source string
 * @b: character to be paste in s by size n
 * @n: size to be filled with b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
