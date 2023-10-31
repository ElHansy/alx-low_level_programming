#include "main.h"


/**
 *_strcpy - update value
 *
 *@dst: value to be evaluated
 *@src: value to be evaluated
 *
 *Return: Always 0
 */

char *_strcpy(char *dst, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dst[x] = src[x];
	}

	dst[l] = '\0';

	return (dst);
}
