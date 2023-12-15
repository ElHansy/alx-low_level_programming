#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: area source
 * @dest: area destination
 * @i: size to be copied from src
 * Return: a after modify
*/

char *_memcpy(char *dest, char *src, unsigned int i)
{
	unsigned int a, b = 0;

	for (a = 0; a < i; a++)
	{
		dest[a] = src[b];
		b++;
	}
	return (src);
}
