#include "main.h"

/**
 * _strncat - concatenates first string and 2 character from second
 *
 * @dest: The destination string
 * @n: number of digits
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';

	return (dest);
}
