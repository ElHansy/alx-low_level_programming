#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: area source
 * @dest: area destination
 * @n: size to be copied from src
 * Return: a after modify
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
