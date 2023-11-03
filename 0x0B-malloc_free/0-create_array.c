
#include "main.h"

/**
 * *create_array - Create array and initialize it with character c
 * @size: of array
 * @c: input char
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *P = malloc(sizeof(char) * size);

	if (size == 0 || P == 0)
		return (NULL);

	while (size--)
	{
		P[size] = c;
	}
	return (P);
}
