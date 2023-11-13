#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: area source
 * @dest: area destination
 * @n: size to be copied from src
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
